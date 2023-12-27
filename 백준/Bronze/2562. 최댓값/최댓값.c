#include <stdio.h>

int main()
{
	int a, b = 0;
	int max = -1111;

	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &a);
		if (max < a)
		{
			max = a;
			b = i;
		}
	}
	printf("%d\n%d", max, b);
}