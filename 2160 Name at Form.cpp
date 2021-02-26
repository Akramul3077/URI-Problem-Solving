#include <stdio.h>
#include<string.h>

int main(){
    char a[550];
    gets(a);
    if(strlen(a)>80){
        printf("NO\n");
    }else{
         printf("YES\n");
    }

return 0;}
