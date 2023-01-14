#include <stdio.h>

int main()
{
    int a[6],i;
    int *p;
    for(p=a;p<=&a[6];p++){
      scanf("%d",p);
    }
    for(i=0;i<=6;i++){
        printf("%d ",a[i]);
    }
  
    return 0;}
    
