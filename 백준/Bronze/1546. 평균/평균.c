#include <stdio.h>

int main() {

	double a[1001] = { 0, };
	int b;
	double temp = 0;
	double sum = 0;

	scanf("%d", &b);

	for (int i = 1; i <= b; i++)
	{
		scanf("%lf", &a[i]);
	}

	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
		
	for (int i = 1; i <= b; i++)
	{
		sum += a[i]/a[b]*100;
	}

	sum = sum / b;
	printf("%lf", sum);
	
	return 0;
}