#include <stdio.h>
char c;
int main(){
    scanf("%s",&c);
    if(c == 'a'|| c == 'e' || c == 'i' || c =='o' || c == 'u'){
        printf("yes");
    }
    else printf("no");
}
