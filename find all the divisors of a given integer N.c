#include <stdio.h>
int main()
{
    int n, i;
    printf("\nInput an integer: ");
    scanf("%d", &n);
    printf("All the divisors of %d are: ", n);
    for(i = 1; i <= n; i++)
    {
        if((n%i) == 0)
        {

            printf("%d", i);
        }
    }
}

