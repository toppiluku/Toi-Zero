#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a> b && b > c) printf("decreasing");
    else if (a < b && b < c) printf("increasing");
    else printf("neither");
}
