#include<stdio.h>
//input nd output with fgets and puts
int main()
{ 
    char a[100];
    
    fgets(a,sizeof(a),stdin);
    puts(a);
    return 0;
}