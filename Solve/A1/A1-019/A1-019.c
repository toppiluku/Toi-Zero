#include <stdio.h>
int main(){
    int a,b,c;
    const char *x[4] = {"all different","neither","0","all the same"};
    int cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b) cnt++;
    if(a==c) cnt++;
    if(b==c) cnt++;
    printf("%s",x[cnt]);
}
