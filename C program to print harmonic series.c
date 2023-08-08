#include <stdio.h>
int main()
{
    int i,n;
    float a=0.0;
    printf("Input the number of terms : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("1/%d + ",i);
            a=a+1/i;
        }

        if(i==n)
        {
            printf("1/%d ",i);
            a=a+1/i;
        }
    }
}
