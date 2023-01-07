#include<stdio.h>
#include<math.h>
int main()
{
    int a,sum=0,len,b,m;
    scanf("%d",&a);
    len=log10(a)+1;
    m=a;
    while(a!=0){
    b=a%10;
    sum=sum+pow(b,len);
    a=a/10;
    }
    printf("sum:%d\n",sum);
    if(sum==m){
    printf("Armstrong");
    }
    else{
    printf("Not Armstrong");
    }
    return 0;
}