#include<stdio.h>

int main()
{
    char a[20];
    char n;
    fgets(a,20,stdin);
    printf("chracter to be searched:");
    scanf("%c",&n);
    for(int i=0;a[i];i++){
     if(a[i]==n){
        printf("element found at%d",i+1);
        break;
        }

     }
    
    return 0;
}