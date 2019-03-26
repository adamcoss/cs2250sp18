#include<stdio.h>
int main()
{
	int i = 0;
	int y = 3;

	printf("i is %d\n", i);
	i = i + 1;			//increment value by 1
	printf("i is %d\n", i);
	i += 1; 			// compount operator and 1 to the current value
	printf("i is %d\n", i);
	i = i - 1;			//increment value by 1
	printf("i is %d\n", i);
	i -= 1; 			// compound operator and 1 to the current value
	printf("i is %d\n", i);		// compound also works with mul, div, and %.
	i += y;
	printf("i is %d\n", i);		// compound also works with mul, div, and %.
	i *= y;
	printf("i is %d\n", i);		// compound also works with mul, div, and %.
	return 0;
}
