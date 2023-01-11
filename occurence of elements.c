#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    fgets(a,20,stdin);
    int n=strlen(a);
    for(int i=0;i<n-1;i++){
       printf("position of %c is %d\n",a[i],i);
    }
    
    return 0;
}