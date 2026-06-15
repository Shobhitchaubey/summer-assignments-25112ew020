// Write a programe to prinrt LCM of two number;
#include<stdio.h>
int main()
{
    int a,b,L;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    for(L=1;L<=a*b;L++)
    {
        if(L%a == 0 && L%b == 0)
        break;
    }
    printf("The LCM of %d and %d are %d :",a,b,L);
    return 0;
}