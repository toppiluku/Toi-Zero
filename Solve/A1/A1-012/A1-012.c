#include <stdio.h>
int n,a;
char s;
int main() {
    scanf("%d %c",&n,&s);
    a = (n%10)*10+(n/10);
    if (s=='+'){
        printf("%d %c %d = %d",n,s,a,n+a);
    }
    else printf("%d %c %d = %d",n,s,a,n*a);
}
