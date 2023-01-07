 /*
          5
         4 4
        3 3 3
       2 2 2 2
      1 1 1 1 1
*/
#include<stdio.h>

int main()
{int n;
scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++)
        printf(" ");
        for (int k=n;k>=i;k--)
        printf("%d ",i);
        
        printf("\n");
        }
    return 0;
}