#include<stdio.h>
int array(int n)
{
    int i;
    scanf("%d",&n);
    int a[n];
   for (i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for (i=0;i<n;i++)
   {
       printf("%d,",a[i]);
   }
    return 0;
}
int main()
{
    int n;
    array(n);
    return 0;
}