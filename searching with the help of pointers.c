#include<stdio.h>

int main()
{
    int a[4],i,flag=0;
    int *p=a;
    for( i=0;i<5;i++){
        scanf("%d",p+i);
    }
    int x, count=0;
    printf("enter ele to be searched");
    scanf("%d",&x);
    for(p=a;p<=&a[4];p++){
    ++count;
    if (*p==x){
        printf ("ele found at %d",count);
        flag=1;
        break;
        }
     }
    if(flag==0){
    printf("ele not found");
    }
    return 0;
}