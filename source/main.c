#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int num1,num2;

	printf("Enter two integers: ");
	scanf_s("%d%d", &num1, &num2);

	if (num1 % num2 == 0)
		printf("%d is the multiple of %d", num1, num2);
	else
		printf("%d is not the multiple of %d", num1, num2);

	system("pause");
	return 0;
}