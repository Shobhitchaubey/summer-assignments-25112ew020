//write a programe to check whweather a number is armstong or not 
#include <stdio.h>
int main()
{
    int n,r;
    printf("enter a number:");
    scanf("%d",&n); 
        int sum = 0;
        int x = n;
        while(x!=0)
        {
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
        }
        if(sum==n)
        printf("%d is a armstong number",n);
        else 
        printf("%d is not a armstong number",n);
    
    return 0;

}
