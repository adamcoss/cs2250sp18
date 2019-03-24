#!/bin/sh
# ----
# Vanilla extraction script
#
# Address questions to jcarmstrong@weber.edu
#
# ----
if [ $# -ne 8 ]; then 
        echo ""
        echo "usage:"
        echo ""
        echo "vanilla_run.sh <DataDirFile> <Min Long> <Max Long> <Min Lat> <Max Lat> <Min Solar Long> <Max Solar Long> <Output File>"
	echo "        Note: TES Data are in W positive Longitude, 0 - 360, but this program assumes positive east -180 to 180 (from Robbins' dataset)."
        echo ""

        exit 127
fi

# parse input

dirfile=${1}
minlong=${2}
maxlong=${3}
minlat=${4}
maxlat=${5}
minsol=${6}
maxsol=${7}
outfile=${8}

echo "Converting to east longitude coordinates..." 
	
# These are switched because we are going from +E to +W
	
wmaxlong=`echo ${minlong} | awk '{if ($1 < 0) print -($1); else print 360-$1}'`
wminlong=`echo ${maxlong} | awk '{if ($1 < 0) print -($1); else print 360-$1}'`

echo ""
echo "Starting vanilla TES data search in ${data}" 
echo "for the following search parameters..."
echo ""
echo "     Longitude ${minlong} to ${maxlong} +E"
echo "     Longitude ${wminlong} to ${wmaxlong} +W" 
echo "     Latitude  ${minlat} to ${maxlat}"
echo "     Solar Longitude ${minsol} to ${maxsol}"
echo ""

if [ -f am_${outfile}.txt ]; then
    rm *${outfile}*
fi

echo "solar_longitude local_time latitude w_longitude w_long lambert_albedo bolometric_brightness_temp target_temperature surface_pressure orbit_number" > pm_${outfile}
echo "solar_longitude local_time latitude w_longitude w_long lambert_albedo bolometric_brightness_temp target_temperature surface_pressure orbit_number" > am_${outfile}

while read data; do
   # echo "Searching ${data}..."

    datadir=/Workspace/jca/tes/mgs-m-tes-3-tsdr-v2/${data}/data/mars
 
    /Workspace/jca/tes/bin/vanilla ${datadir} -fields \
	"solar_longitude local_time latitude longitude lambert_albedo bolometric_brightness_temp target_temperature surface_pressure orbit_number" \
 	-select "longitude ${wminlong} ${wmaxlong} latitude ${minlat} ${maxlat} solar_longitude ${minsol} ${maxsol} local_time 0 12" > tmp_am_${outfile} 
    /Workspace/jca/tes/bin/vanilla ${datadir} -fields \
	"solar_longitude local_time latitude longitude lambert_albedo bolometric_brightness_temp target_temperature surface_pressure orbit_number" \
 	-select "longitude ${wminlong} ${wmaxlong} latitude ${minlat} ${maxlat} solar_longitude ${minsol} ${maxsol} local_time 12 24" > tmp_pm_${outfile}

    tmpamsize=`wc tmp_am_${outfile} | awk '{print $1}'`
    tmppmsize=`wc tmp_pm_${outfile} | awk '{print $1}'`
    
    if [ ${tmpamsize} -gt 1 ]; then
	tmpamsize=`echo ${tmpamsize} | awk '{print $1-1}'`
	tail -${tmpamsize} tmp_am_${outfile} | awk '{printf("%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%d\n", $1, $2, $3, $4, $4, $5, $6, $7, $8, $9)}' >> am_${outfile}
    fi

    if [ ${tmppmsize} -gt 1 ]; then
	tmppmsize=`echo ${tmppmsize} | awk '{print $1-1}'`
	tail -${tmppmsize} tmp_pm_${outfile} | awk '{printf("%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%.9f\t%d\n", $1, $2, $3, $4, $4, $5, $6, $7, $8, $9)}' >> pm_${outfile}
    fi

    rm tmp_pm_${outfile} tmp_am_${outfile} 

done < ${dirfile}

echo "Vanilla run complete. Cleaning up..."

echo ""
echo "Complete.  TES data stored in (am/pm)_${outfile}" 		






