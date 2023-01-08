#include<stdio.h>

int main()
{
    char a[10],b[10];
    int i,j,n=0;
    scanf("%s %s",a,b);
    for(i=0;a[i] || b[i];i++){
    if(a[i]-b[i]>0){
    printf("string 1st is greater");
    n=1;
    break;
    }
    else if(a[i]-b[i]<0){
    printf("string 2 is greater");
    n=1;
    break;
   }
}
if(n==0)
printf("both are equal");
    
    return 0;
}