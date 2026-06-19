// write a progrmae to print armstrong number in  given range
#include <stdio.h>
int main()
{
    int n,r;
    int a,b;
    printf("enter lower value:");
    scanf("%d",&a);
    printf("enter the upper value:");
    scanf("%d",&b);
    for(n=a;n<=b;n++)
    {
        int sum = 0;
       int x = n;
        while(x!=0)
        {
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
        }
        if(sum==n)
        printf("%d\n",n);
    }
    return 0;


}