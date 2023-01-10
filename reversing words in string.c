#include<stdio.h>
#include<string.h>
int main()
{ char a[100],ch[100];
int t;
 scanf("%[^\n]s",a);
int len=strlen(a);
int space[len],k=0,x=0;
for(int i=0;a[i];i++){
if(a[i]==' '){
 space[k]=i;
 k++;
}
}
a[len]=' ';
for(int r=1;r<=k;r++){
for(int i=space[k-r]+1;a[i]!=' ';i++){
  ch[t]=a[i];
t++;
}
ch[t]=' ';
t++;
}
for(int i=0;a[i]!=' ';i++){
ch[t]=a[i];
t++;
}
ch[t]='\0';
printf("%s",ch);


    
    return 0;
}