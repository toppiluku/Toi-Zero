#include <stdio.h>
int main() {
    int y,c;
    scanf("%d %d",&y,&c);
    if(y<=1990){
        if(c<=1500) printf("1250");
        else if (1500<c && c<=2000) printf("1400");
        else printf("2000");
    }
    else if (1991<=y && y<=1999){
        if(c<=1500) printf("1100");
        else if (1500<c && c<=2000) printf("1300");
        else printf("1700");
    }
    else {
        if(c<=1500) printf("1000");
        else if (1500<c && c<=2000) printf("1200");
        else printf("1500");
    }
}
