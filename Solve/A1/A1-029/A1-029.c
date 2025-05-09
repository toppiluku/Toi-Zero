#include <stdio.h>
int main(){
    char a[100010];
    scanf(" %s",a);
    int cnt = 0;
    for(int i=0;i<strlen(a);i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') cnt++;
    }
    printf("%d",cnt);
}
