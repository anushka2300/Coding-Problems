#include<stdio.h>

int main()
{
    int i,sum=0,b;
    scanf("%d",&i);
    while(i!=0){
    b=i%10;
    sum=sum+b;
    i=i/10;
   
    }
    printf("%d",sum);
    
    return 0;
}