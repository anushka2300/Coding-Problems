#include<stdio.h>
int armstrong(int n)
{
    int d,sum=0,b,c,a;
     d=log10(n)+1;
    a=n;
    while(a>0)
    {
        b=a%10;
        c=pow(b,d);
        sum=sum+c;
        a=a/10;
    }
    if(sum == n)
        printf("armstrong number\n");
    else
        printf("Not an armstrong\n");
    }
    int prime(int n)
{   int i,c=0;
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       c++;
   }
   if(c==2)
   printf("prime number\n");
   else
   printf("not a prime number\n");


    return 0;
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
    return 0;
}