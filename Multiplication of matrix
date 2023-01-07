#include <stdio.h>

int main()
{
    int n,m,p[50][50]={0};
    printf("enter r nd c of 1st");
    scanf ("%d %d",&n,&m);
    int a[n][m];
    printf("enter 1st matrix\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    scanf("%d",&a[i][j]);
    }
    }
    int x,y;
    printf("enter r nd c of 2nd");
    scanf("%d%d",&x,&y);
    int b[x][y];
    printf("enter 2nd matrix\n");
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
    scanf("%d",&b[i][j]);
    }
    }
    int sum=0;
    if(x==m){
        for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
        for(int k=0;k<x;k++){
       p[i][j]+=a[i][k]*b[k][j];
         }
        }
        }
        }
      for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
        printf("%d ",p[i][j]);
        }
        printf ("\n");
        }
        
      

  


    return 0;
}
