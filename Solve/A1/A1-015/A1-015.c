#include <stdio.h>
char a[1010],b[1010],c[10];
int main(){
    scanf("%s %s %s",a,b,c);
    if (strlen(a)>5 && strlen(b)>5){
        printf("%.2s%c%c",a,b[strlen(b)-1],c[strlen(c)-1]);
    }
    else{
        printf("%c%s%c",a[0],c,b[strlen(b)-1]);
    }
}
