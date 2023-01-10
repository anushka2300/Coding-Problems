#include<stdio.h>

int main()
{int temp;
    char a[30];
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0;i<=len/2;i++){
    temp=a[i];
    a[i]=a[len-i-1];
    a[len-i-1]=temp;
    }
    printf("after reversing %s",a);
    return 0;
}