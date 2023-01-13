#include<stdio.h>
int sum(int n)
{
    int i,sum;
    scanf("%d",&n);
    int a[n];
   for (i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
printf("\n");
   for (i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
      return sum;
}

   
int main()
{int n;
    printf("%d",sum(n));

    return 0;
}