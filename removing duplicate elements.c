#include<stdio.h>

int main()
{
    char a[20],b[27]={0},c[20]={0};
    
    fgets(a,20,stdin);
    int n=strlen(a);
    for(int i=0;i<n-1;i++){
       b[a[i]-'a']++;
    }
    int j=0;
    for(int i=0;i<27;i++){
      if(b[i]>1){
        c[j]=i+97;
        j++;
        }
      if(b[i]==1){
         c[j]=i+97;
            j++;
        }
        }
        printf("new string is");
        for(int i=0;c[i];i++){
        printf("%c",c[i]);
        }
    return 0;
}