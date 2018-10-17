#include<stdio.h>
#include<stdlib.h>

int main()
{
	float g,s;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &g);
		if (g == -1)break;
		s = g * 0.09 + 200;
		printf("Salary is:$%.2f\n\n", s);
	}
	/*for (;;) 
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f",&g);
		if (g == -1)
		{
			system("pause");
			return 0;
		}
		for(;g>0;)
		{
			s = g * 0.09 + 200;
			printf("Salary is:%.2f\n\n\n\n\n", s);
			break;
		}
		
	}*/
	system("pause");
}































	
