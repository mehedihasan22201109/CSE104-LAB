#include<stdio.h>
int main()
{
    int m;
    printf("Enter a year:");
    scanf("%d",&m);
    while(1)
    {
        if(m%200 == 0)
        {

            printf("Has  been observed ");
            break;
        }
        else
        {
            printf("Has not been observed yet");
            break;
        }
    }
}
