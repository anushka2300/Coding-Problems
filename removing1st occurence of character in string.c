#include<stdio.h>

int main()
{
    
    char a[20];
    char n;
    fgets(a,20,stdin);
    printf("chracter to be removed:");
    scanf("%c",&n);
    for(int i=0;a[i];i++){
     if(a[i]==n){
        for(int j=i;a[j];j++){
        a[j]=a[j+1];
        break;    
        }
     }
     }
    printf("print the modified string ");
    printf("%s",a);
return 0;
}