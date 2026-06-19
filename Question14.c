// write a programe to print nth fibonacci term
#include <stdio.h>
int main()
{
   int n;
   printf("enter n :");
   scanf("%d",&n);
   int t1 = 0;
   int t2 = 1;
   int t3 = t1 + t2;
   for(int i=3;i<=n;i++)
   {
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
   }
    printf("%dth fibonacci term is %d",n,t3);
   
   return 0;
}