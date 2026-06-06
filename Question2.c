// write a programe to print table of a given number//
#include<stdio.h>
 int main()
 {
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n)
    {
        printf("%d \n",i);

    }
    return 0;
 }
