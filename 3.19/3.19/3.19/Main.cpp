#include<stdio.h>
#include<stdlib.h>



int main(void) {
	float principal, rate = 0, days, charge;

	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &principal);

	if (principal == -1)
	{
		system("pause");
		return 0;
	}
	else
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the laon in days: ");
		scanf_s("%f", &days);

		charge = principal * rate*days / 365;

		printf("The interest charge is $%.2lf", charge);
		printf("\n\n");
	}
	
	system("pause");
	return 0;

}