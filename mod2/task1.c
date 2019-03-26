#include<stdio.h>

int main()
{
	// take two integers from user
	// display sum
	// display difference
	// display product

	int int1;
	int int2;

	printf("Please enter an integer:\n");
	scanf("%d", &int1);
	printf("Please enter an integer:\n");
	scanf("%d", &int2);
	printf("%d + %d = %d\n", int1, int2, int1 + int2);
	printf("%d - %d = %d\n", int1, int2, int1 - int2);
	printf("%d * %d = %d\n", int1, int2, int1 * int2);
	printf("%d / %d = %d\n", int1, int2, int1 / int2);
	// division will give you the quotient
	// to get the remainder you use modulus "%" 	
	printf("%d modulus %d = %d\n", int1, int2, int1 % int2);
	return 0;
}
