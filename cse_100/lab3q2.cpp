#include <iostream>
using namespace std;
int main()
{
// Variables
	double cTemp, fTemp;

//Conversion
	cout<<"Fahrenheit to Celsius Conversion"<<endl;
	fTemp=32;
	cTemp=(5.0/9)*(fTemp-32);
	cout<<"Fahrenheit "<<fTemp<<" \tCelsius "<<cTemp<<endl;
	fTemp=78;
	cTemp=(5.0/9)*(fTemp-32);
	cout<<"Fahrenheit "<<fTemp<<"\tCelsius "<<cTemp<<endl;
	fTemp=100;
	cTemp=(5.0/9)*(fTemp-32);
	cout<<"Fahrenheit "<<fTemp<<"\tCelsius "<<cTemp<<endl;
	
	return 0;
}
