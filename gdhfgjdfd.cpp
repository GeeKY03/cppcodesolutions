#include<stdio.h>


int main()
{
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];

	}
	int gcd = 1;
	int f = 0;
	for (int i = 2; i < max; i++)
	{
		f = 0;
		int c = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] % i != 0)
			{
				c++;

			}
			if ( c == 2)
			{
				f = 1;
				break;
			}
		}
		if (f == 0) gcd = i;

	}
	printf("%d", gcd);

}