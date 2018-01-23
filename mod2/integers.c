#include<stdio.h>

int main()
{
	int userAge; 				// declaring and integer var. value unknown
	int votingAge = 18;			// declaring and initializing var.
	
	printf("userAge, address:%p value:%d\n", &userAge, userAge);
	printf("votingAge, address:%p value:%d\n", &votingAge, votingAge);
	return 0;
}
