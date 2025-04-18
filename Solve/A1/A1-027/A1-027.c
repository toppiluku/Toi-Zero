#include <stdio.h>
int i;
char x[10];
int main(){
    scanf("%s", x);
    for(i=0;i<strlen(x);i++) {
        if(isupper(x[i])) x[i]+=32;
    }
    for(i=strlen(x)-1;i>=0;i--){
        printf("%c",x[i]);
    }
}
