#include <stdio.h>
int main() 
{
    int n;
    double sum = 0;
	printf("ÇëÊäÈënµÄÖµ£º");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += (double)(i - 1) / i;

        }
        else
        {
            sum -= (double)(i - 1) / i;
        }
    }
    printf("%lf\n", sum);
    return 0;
}
