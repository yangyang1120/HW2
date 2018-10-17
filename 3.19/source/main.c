#include<stdio.h>
#include<stdlib.h>

int main()
{
	double p, r, i, d;
	for (;;)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%lf", &p);
		if (p == -1)
		{
			system("pause");
			return 0;
		}
		for (;p > 0;)
		{
			printf("Enter interest rate:");
			scanf_s("%lf", &r);
			printf("Enter term of the loan in days:");
			scanf_s("%lf", &d);
			printf("The interest charge is $%.2lf\n\n\n\n\n", p*r*d / 365);
			break;
		}
	}
}