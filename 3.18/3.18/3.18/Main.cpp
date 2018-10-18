#include<stdio.h>
#include<stdlib.h>


int main(void) {
	float salary = 200, sells_in_dollars;

	printf("Enter sales in dollars(-1 to end): ");
	scanf_s("%f", &sells_in_dollars);

	if (sells_in_dollars == -1)
	{
		system("pause");
		return 0;
	}
	else
	{
		printf("Salary is %.2lf\n", salary + 0.09*sells_in_dollars);
		printf("\n");
	}
	system("pause");
	return 0;
}