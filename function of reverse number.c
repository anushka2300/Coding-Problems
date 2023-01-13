#include<stdio.h>
int reverse(int n)
{
    int a,r,i,s=0;
    a=n;
    while(a!=0){
    r=a%10;
    s=(s*10)+r;
    a=a/10;
    }
    return s;
}
int main()
{
   int d,n;
   scanf("%d",&n);
   d=reverse(n);
   printf("reverse number is %d",d);
    
    return 0;
}