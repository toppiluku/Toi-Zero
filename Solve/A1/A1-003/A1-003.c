#include <stdio.h>
int a,b,c;
int main(){
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c){
        printf("%d",a);
    }
    else if (b >= a && b >= c){
        printf("%d",b);
    }
    else printf("%d",c);
}
