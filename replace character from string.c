#include<stdio.h>

int main()
{
    char a[20],n,m;
    scanf("%s",a);
    printf("enter character new and old character ");
    scanf("%c%c",&n,&m);
    for(int i=0;a[i];i++){
        if(a[i]==m){
            a[i]=n;
            break;
         }
     }
    
     printf("enter new string %s",a);
    
    
    return 0;
}