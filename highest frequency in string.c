#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[27]={0};
    int i,x;
    fgets(a,20,stdin);
    int n=strlen(a);
    for(int i=0;i<n-1;i++){
       b[a[i]-'a']++;
    }
    int max=b[0];
    for(i=0;i<27;i++){
      if(b[i]>max){
      max=b[i];
      x=i+97;
    }}
      printf("frequency of %c is max %d\n",x,max);
    
    
    return 0;
}