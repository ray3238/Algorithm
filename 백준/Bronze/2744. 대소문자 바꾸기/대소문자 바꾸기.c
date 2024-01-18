#include <stdio.h>
#include <string.h>

int main()
{
	//97~122 a~z
	//65~90 A~Z
	char str[100] = " ";
	int length, i;

	scanf("%s", str);

	length = strlen(str);

	for (i = 0; i < length; i++) 
	{
		if (str[i] >= 97 && str[i] <= 122) 
		{
			str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90) 
		{
			str[i] += 32;
		}
	}

	printf("%s", str);
}