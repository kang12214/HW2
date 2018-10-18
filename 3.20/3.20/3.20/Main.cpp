#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float hours, salary, sum;

	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%f", &hours);

	if (hours == -1)
	{
		system("pause");
		return 0;
	}
	else
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &salary);
		if (hours > 40)
		{
			sum = 40 * salary + (hours - 40)*1.5*salary;
		}
		else
		{
			sum = salary * hours;
		}
		printf("The interest charge is $%.2lf\n", sum);
	}

	system("pause");
	return 0;
}