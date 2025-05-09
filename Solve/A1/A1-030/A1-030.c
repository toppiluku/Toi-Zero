#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d %d",&x, &y);
        int mx;
        if (x > y) mx = x;
        else if (x < y) mx = y;
        else mx = x;
        sum+=mx;
        if (i!=n && n!=1) printf("%d",mx);
        if(i!=n-1) printf(" + ");
        else if(n!=1)  printf(" = ");
    }
    printf("%d",sum);
}
