#include <stdio.h>
int n;
char a;
int main(){
    scanf("%d %c",&n,&a);
    a=tolower(a);
    if(n <= 18 || a == 's'){
        printf("20");
    }
    else{
        printf("50");
    }
}
