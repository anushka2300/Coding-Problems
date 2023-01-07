#include<stdio.h>

int main()
{
    int i,sum=0;
    scanf("%d",&i);
    while(i>0){
    sum=sum+i;
    i--;
    }
    printf("%d",sum);
    
    return 0;
}