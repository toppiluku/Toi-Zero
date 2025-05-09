#include <stdio.h>
int main(){
    char a[100010];
    scanf("%s", a);
    int len = strlen(a)-3;
    for(int i=0;i<len;i++){
        printf("%c",a[i]);
    }
    printf(",%c%c%c",a[len],a[len+1],a[len+2]);
}
