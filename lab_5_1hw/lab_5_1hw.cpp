#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	while (1==1)
	{

		
		int n, d1, d2, d3;
		printf("Enter any 3-digit number:  ");
		scanf_s("%d", &n);
		if (n >= 1000 || n < 100)
		{
			printf("ERROR!\n");
			break;
		}
		int i2 = n;
		for (int i = n; i >0; i--)
		{
			d1 = n % 10;
			d2 = n / 10 % 10;
			d3 = n / 100;
		}

		if (pow(d1, 3) + pow(d2, 3) + pow(d3, 3) == i2)
			printf("%d is an ARMSTRONG number\n", i2);
		else
			printf("%d is not an ARMSTRONG number\n", i2);
		printf("\n");
	}
	
	system("Pause");
}