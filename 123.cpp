#include <stdio.h>
int main(void)
{
	int k = 0;
	while (k < 10)
	{
		if (k < 1)
			continue;
		if (k == 5)
			break;
		k++;
	}
	printf("%d", k);
	return 0;
}