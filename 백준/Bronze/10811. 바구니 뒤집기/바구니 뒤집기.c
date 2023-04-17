#include <stdio.h>


int a[101] = { 0, };
int main()
{
	int n, m;
	int b, c;
	int temp = 0;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}

	for (int i = 1; i <= m; i++)
	{
		scanf("%d %d", &b, &c);
		
		while (b <= c) {
			temp = a[b];
			a[b] = a[c];
			a[c] = temp;
			b++;
			c--;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}

}