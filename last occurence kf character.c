#include<stdio.h>

int main()
{int t;
    char a[20];
    char n;
    fgets(a,20,stdin);
    printf("chracter to be searched:");
    scanf("%c",&n);
    for(int i=0;a[i];i++){
     if(a[i]==n){
        t=i;
       
        }

     }
    printf("element found at%d",t);
    
    return 0;
}