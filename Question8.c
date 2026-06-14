//write a programe to cheack wheather a number is palindrome or not
#include <stdio.h>
int main()
{
    int n,r,num,rev=0;
    printf("enter a number :");
    scanf("%d",&n);
    num = n;
    while (n!=0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n =n / 10;
    }
    if(num==rev)
    {
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrone");
    }
    return 0;
}
