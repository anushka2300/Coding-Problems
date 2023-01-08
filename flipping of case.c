#include<stdio.h>

int main()
{
    char a[10];
    int i,x;
    scanf("%s",a);
    printf("Choose 1 for UPPR-->LOWR\nChoose 2 for LWR-->UPPR\n");
    scanf("%d",&x);
    if(x==1){
    for(i=0;a[i];i++){
    if(a[i]>=65 && a[i]<=90){
     a[i]=a[i]+32;
    }
    }printf("%s",a);}
    else if(x==2){
    for(i=0;a[i];i++){
    if(a[i]>=97 && a[i]<=122){
     a[i]=a[i]-32;
    }
    }
    printf("%s",a);}
    
    
    
    return 0;
}