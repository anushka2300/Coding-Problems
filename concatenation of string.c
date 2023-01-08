#include<stdio.h>

int main()
{
    char a[10],b[10],c[20];
    int i,j,n;
    scanf("%s %s",a,b);
    for(i=0;a[i];i++){
     c[i]=a[i];
     }
    n=i;
    for(j=0;b[j];j++){
    c[n+j]=b[j];
    }
    
    printf("%s",c);
    
    
    return 0;
}