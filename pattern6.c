 /*
    5
    4 4
    3 3 3 
    2 2 2 2
    1 1 1 1 1
   
*/

#include<stdio.h>

int main()
{int n,a=5;
scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("%d ",a);
        }printf("\n");
        a--;
        }
    return 0;
}