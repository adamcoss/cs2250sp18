#include <stdio.h>
#include <string.h>// FIXME include the string library
int main(void) 
{
char oil[] = "Oil change";
char tire[] = "Tire rotation";
char wash[] = "Car wash";
char wax[] = "Car wax";
int valOil = 35;
int valTire = 19;
int valWash = 7;
int valWax = 12;
char firstService[50];
char secondService[50];   
printf("Davy's auto shop services\nOil change -- $35\nTire rotation -- $19\nCar wash -- $7\nCar wax -- $12\n\n");   
printf("Select first service:\n");   
scanf("%[^\n]s", firstService);   
printf("Select second service:\n\n");   
scanf("%[^\n]s", secondService);      
printf("Davy's auto shop invoice\n\n");     
if(strcmp(firstService, oil) == 0)    
{      
printf("Service 1: %s, $%d\n", oil, valOil);   
}   
else if(strcmp(tire, firstService) == 0)   
{      
printf("Service 1: %s, $%d\n", tire, valTire);   
}   
else if(strcmp(wash, firstService) == 0)   
{      
printf("Service 1: %s, $%d\n", wash, valWash);   
}   
else if(strcmp(wax, firstService) == 0)   
{      
printf("Service 1: %s, $%d\n", wax, valWax);   
}   
if(strcmp(oil, secondService) == 0)    
{      
printf("Service 2: %s, $%d\n", oil, valOil);   
}   
else if(strcmp(tire, secondService) == 0)   
{      
printf("Service 2: %s, $%d\n", tire, valTire);   
}   
else if(strcmp(wash, secondService) == 0)   
{      
printf("Service 2: %s, $%d\n", wash, valWash);   
}
else if(strcmp(wax, secondService) == 0)   
{
printf("Service 2: %s, $%d\n", wax, valWax);   
}   
/* Type your code here. */   
return 0;}
