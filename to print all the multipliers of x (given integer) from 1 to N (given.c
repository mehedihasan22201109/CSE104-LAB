#include <stdio.h>

int main()
{
    int A, N, i;
    i=1;
// Input x and N
    printf("Enter an integer A: ");
    scanf("%d\n", &A);

    scanf("%d", &N);
// Printing the multipliers using a do-while loop
    do
    {
        printf("%d No. Multiplier of %d: %d\n", i, A, A*i);
        i++;
    }
    while (A*i<= N);
    return 0;
}
