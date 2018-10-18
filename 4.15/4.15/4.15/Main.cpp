#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float amount;
	float principle = 5000;
	float rate;
	int year;

	for (rate = 0.10; rate <= 0.125; rate += 0.005)
	{
		printf("Year	Amount on deposit");
		printf("(%.1f)\n", rate * 100);
		amount = principle;

		for (year = 1; year <= 15; year++)
		{
			amount = amount * (1 + rate);
			printf("%d	%.2f\n", year, amount);
		}
		printf("\n");
	}

	system("pause");
	return 0;

}
