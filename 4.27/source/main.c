#include<stdio.h>
#include<stdlib.h>

int main()
{
	int side1, side2, g;
	printf("side1\tside2\t±×Ãä\n");
	for (g = 500;g >= 0; g--)
	{
		for (side1 = 1;side1 < 500;side1++)
		{
			for (side2 = 1;side2 < 500; side2++)
			{
				if (side1 * side1 + side2 * side2 == g * g)
				{
					printf("%d\t%d\t%d\n", side2, g, side1);
				}
			}
		}
	}
	system("pause");
}