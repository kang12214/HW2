#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int length, breadth;
	printf("Enter length	: ");
	scanf_s("%d", &length);
	printf("Enter breadth	: ");
	scanf_s("%d", &breadth);

	for (int a = 1; a <= length; a++) 
	{
		for (int b = 1; b <= breadth; b++) 
		{
			if (b == 1 || b == breadth || a == 1 || a == length)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}