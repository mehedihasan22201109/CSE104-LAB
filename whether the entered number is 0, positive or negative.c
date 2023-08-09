#include <stdio.h>
int main()
{
    int i,N;
    i = 0;
    while (i<N)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0)
        {
            printf("Zero\n");
        }
        else if (num > 0)
        {
            printf(" Positive\n");
        }
        else
        {
            printf("Negative\n");

        }

        i++;
    }
    return 0;
}






