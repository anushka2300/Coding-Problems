#include<stdio.h>
#include<string.h>
int main()
{ char a[200],s[20];
int j=0,i;
 scanf("%[^\n]s",a);
int len1=strlen(a);
 printf("enter the word to be searched ");
 scanf("%s",s);
int len=strlen(s);
for(i=0;a[i];i++){
    if(a[i]==s[j]){
        j++;
        if(j==len){
        printf("word found at %d ",(i-len)+1);
        break;
        }
    }
    }
 if(i==len1)
printf("word not found");
    return 0;
}