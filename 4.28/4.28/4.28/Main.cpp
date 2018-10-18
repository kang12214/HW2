#include<stdio.h>
#include<stdlib.h>



int main(void) {
	while (1)
	{
		int type = 0;
		printf("Enter the code(-1 to end) : ");
		scanf_s("%d", &type);
		if (type == -1)
		{
			system("pause");
			return 0;
		}
		else
		{
			float salary, hours, sum = 0;
			switch (type)
			{
			case 1:

				printf("Enter weekly salary : ");
				scanf_s("%f", &salary);
				printf("Weekly salary is $%.2f", salary);
				break;

			case 2:

				printf("Enter hourly salary : ");
				scanf_s("%f", &salary);
				printf("Enter working time : ");
				scanf_s("%f", &hours);

				if (hours > 40)
				{
					sum = 40 * salary + 1.5*(hours - 40)*salary;
				}
				else
				{
					sum = salary * hours;
				}

				printf("Weekly salary is $%.2f", sum);
				break;

			case 3:

				printf("Enter weekly sales : ");
				scanf_s("%f", &salary);
				printf("Weekly salary is $%.2f", salary*0.057 + 250);
				break;

			case 4:

				printf("Enter how many items produced : ");
				scanf_s("%f", &sum);
				printf("Enter money of each items : ");
				scanf_s("%f", &salary);
				printf("Weekly salary is $%.2f", sum*salary);
				break;

			default:

				printf("Error!\n");
			}
			printf("\n");
		}
	}

	system("pause");
	return 0;


}