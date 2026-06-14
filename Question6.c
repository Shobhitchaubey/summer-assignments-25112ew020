// Write a programe to reverse of s given number
#include <stdio.h>
int main()
{
    int n,r,rev =0;
    printf("enter any mumber:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("the reverse of tghe given number is:%d",rev);
    return 0;
}