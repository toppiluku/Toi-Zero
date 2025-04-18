#include <stdio.h>
int i,n,ev=0,od=0;
int main(){
    for(i=0;i<3;i++){
        scanf("%d",&n);
        if(n%2==0) ev++;
        else od++;
    }
    printf("even %d\n",ev);
    printf("odd %d",od);
}

