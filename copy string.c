#include<stdio.h>

int main()
{ int i;
    char a[10]="hii";
    char b[10];
    for(i=0;a[i]!='\0';i++){
    b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",b);
    return 0;
}