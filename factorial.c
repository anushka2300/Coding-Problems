#include<stdio.h>

int main()
{
    long a,f,i;
    i=f=1;
    scanf("%ld",&a);
    while(i<=a){
    f=f*i;
    i++;
    }
    printf("%ld",f);
    
    
    return 0;
}