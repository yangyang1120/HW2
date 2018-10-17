#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int p = 5000, y = 15,g;
	float  i,r=0.1;
	i = pow((1 + r), y);
	printf("%.1f%%的利率值=%.2f\n", r*100,i*p);
	for (g=1;g<5;g++)
	{
		r += 5.0 / 1000;
		i = pow((1 + r), y);
		printf("%.1f%%的利率值=%.2f\n", r*100,i*p);
	}
	system("pause");
}