#include<stdio.h>
int add(int n)
{
    int c,i,sum=0;
    for(i=1;i<n;i++)
    {sum=sum+i;
    }
    printf("%d",sum);
}
int main()
{
   int d,n;
   scanf("%d",&n);
   d=add(n);

    return 0;
}