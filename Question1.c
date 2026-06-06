//write a programe to print sum of first n natural number//
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
   
    sum=sum+i;
        printf("the sum of first %d natural number is %d",n,sum);
        return 0;
}
