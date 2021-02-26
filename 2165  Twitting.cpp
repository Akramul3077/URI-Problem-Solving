#include<stdio.h>
#include<string.h>


int main(){
    char a[600];
    gets(a);
    if(strlen(a)>140){
        printf("MUTE\n");
    }else{
        printf("TWEET\n");
    }

return 0;}
