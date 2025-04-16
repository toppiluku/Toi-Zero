#include <stdio.h>
int m,d;
int main(){
    scanf("%d %d",&m,&d);
    if (d >= 21){
        m = (m+1 > 12) ? 1 : m+1;
    }
    if (m >= 10){
        printf("fall");
    }
    else if (m >= 7){
        printf("summer");
    }
    else if (m >= 4){
        printf("spring");
    }
    else printf("winter");
}
