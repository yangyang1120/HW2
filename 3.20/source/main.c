#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h,r, g=0;
	for (;;)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &h);
		if (h == -1)
		{
			system("pause");
			return 0;
		}
		for (;h > 0;)
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%f", &r);
			if (h > 40)
			{
				g = h - 40;//�N��g��l=0�Ag�]�i���s�w�q
			}
			/*else
				g = 0;*/ //�Yg������l��(g=0)�A�h���椣����
			printf("Salary is $%.2f\n\n\n\n", (h+g*0.5)*r);
			break;
		}
	}system("pause");
}