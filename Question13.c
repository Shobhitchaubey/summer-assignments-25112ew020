// write a programe to print fibonacci series up to nth term
#include <stdio.h>
int main()
{
   int n;
   printf("enter number of terms :");
   scanf("%d",&n);
   int t1 = 0;
   int t2 = 1;
   int t3 = t1 + t2;
   printf("the fibonacci series is : %d,%d,",t1,t2);
   for(int i=3;i<=n;i++)
   {
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
    printf("%d,",t3);
   }
   return 0;
}