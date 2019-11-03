#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x;

	printf("Please enter an integer:\n");
	scanf("%d", &x);
	printf("Double the integer you entered, we have: %d\n", 2 * x);

	system("pause");
	return 0;
}
