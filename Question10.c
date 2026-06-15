// write  a programe to print prime number on the given range x and y

#include <stdio.h>

int main() {
int x,y;
printf("enter the lower value:");
scanf("%d",&x);
printf("enter the higher value:");
scanf("%d",&y);
printf("\n prime  number between %d and %d are :",x,y);
while(x<y){
    int a=0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0){
            a=1;
            break;
        }
    }
    if(a == 0)
    printf("%d ,",x);
    x++;
}
    return 0;
}















