#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	float b, c, d, e, g;
	for (;;)	//若沒有此層，則for(;a>0;)的break則會使程式直接跳到system("pause");
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)
		{
			system("pause");
			return 0;	//直接結束函式
		}
		for (;a > 0;)
		{

			printf("Enter beginning balance:");
			scanf_s("%f", &b);
			printf("Enter total charges:");
			scanf_s("%f", &c);
			printf("Enter total credits:");
			scanf_s("%f", &d);
			printf("Enter credit limit:");
			scanf_s("%f", &e);
			g = b + c - d;
			if (g > e)
			{
				printf("Account:     %d\n", a);
				printf("Credit limit:%.2f\n", e);
				printf("Balance:     %.2f\n", g);
				printf("Credit Limit Exceeded.\n\n\n\n\n");
				break;
			}
			else
			{
				printf("\n\n\n\n");
				break;
			}
		}
	}
	system("pause");
}

