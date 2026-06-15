// write  a programe to check wheather a number is prime or not
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0)
    {
        printf("%d is prime",n);
    }
    else{
        printf("%d is not prime",n);
    }
    return 0;
}