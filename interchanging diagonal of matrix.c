#include<stdio.h>

int main()
{
int n,m,temp;
    printf("enter r nd c");
    scanf ("%d %d",&n,&m);
    int a[n][m];
    printf("enter 1st matrix \n");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    scanf("%d",&a[i][j]);
    
    }
    }
    printf("original matrix\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    printf("%d",a[i][j]);
    }
    printf("\n");
    }
    
    
    if(n==m){
    for(int i=0;i<n;i++){
     temp=a[i][i];
    a[i][i]=a[i][m-i-1];
    a[i][m-i-1]=temp;}
    }
    printf("matrix after modification\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    printf("%d ",a[i][j]);
    }printf("\n");}
    
        
      

    
    return 0;
}