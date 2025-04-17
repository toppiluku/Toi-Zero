#include <stdio.h>
char a;
int b;
int main(){
    scanf("%c %d", &a, &b);
    if (a=='H' && b==4567){
        printf("safe unlocked");
    }
    else if (a=='H'){
        printf("safe locked - change digit");
    }
    else if (b==4567){
        printf("safe locked - change char");
    }
    else printf("safe locked");
}
