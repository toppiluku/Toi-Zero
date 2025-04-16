#include <stdio.h>
int n;
int main(){
    scanf("%d",&n);
    printf("10 = %d\n",n/10);
    n%=10;
    printf("5 = %d\n",n/5);
    n%=5;
    printf("2 = %d\n",n/2);
    n%=2;
    printf("1 = %d",n);
}
