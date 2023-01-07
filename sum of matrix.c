#include<stdio.h>
 // sum of 2 matrix 
int main()
{
    int n,m;
    printf("enter r nd c");
    scanf ("%d %d",&n,&m);
    int a[n][m];
    printf("enter 1st matrix\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    scanf("%d",&a[i][j]);
    }
    }
    
    
    printf("enter 2nd matrix\n");
    int b[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    scanf("%d",&b[i][j]);
    }
    }
    
    int sum[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    sum[i][j]=a[i][j]+b[i][j];
    printf("%d ",sum[i][j]);
    }printf("\n");
    }
    return 0;
}