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
				g = h - 40;//就算g初始=0，g也可重新定義
			}
			/*else
				g = 0;*/ //若g有給初始值(g=0)，則此行不必打
			printf("Salary is $%.2f\n\n\n\n", (h+g*0.5)*r);
			break;
		}
	}system("pause");
}