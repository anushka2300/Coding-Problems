#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[27]={0};
    fgets(a,20,stdin);
    int n=strlen(a);
    for(int i=0;i<n-1;i++){
       b[a[i]-'a']++;
    }
    for(int i=0;i<27;i++){
      if(b[i]!=0){
      printf("frequency of %c is %d\n",i+'a',b[i]);
    }}
    
    return 0;
}