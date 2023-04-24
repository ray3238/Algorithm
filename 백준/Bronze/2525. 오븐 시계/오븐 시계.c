#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int sum1 = 0;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	
	a += (b + c) / 60;
	b = (b + c) % 60;
	if (a >= 24)
	{
		a %= 24;
	}
	printf("%d %d", a, b);
}