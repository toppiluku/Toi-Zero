#include <stdio.h>
char a[4];
int i;
int main(){
    scanf("%s", a);
    for(i=3;i>=0;i--) printf("%c",a[i]);
}
