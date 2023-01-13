#include<stdio.h>
int even_odd(int n)
{
    int i;
    scanf("%d",&n);
    printf("range of even numbers\n");
    for (i=0;i<n;i++)
    {
    if (i%2==0)
    printf("%d, ",i);
    }
    printf("\n");
    printf("range of odd numbers\n");
    for (i=0;i<n;i++)
{
    if (i%2!=0)
    printf("%d, ",i);
}
printf("\n");
}
int main()
{
    int n;
  even_odd(n);
return 0;
}