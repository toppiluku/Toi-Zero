#include <stdio.h>
int main(){
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    if(y1== y2 && m1==m2 && d1==d2){
        printf("0");
    }
    else if (y1>y2 || y1==y2 && m1>m2 || y1==y2 && m1==m2 && d1>d2 ){
        printf("2");
    }
    else printf("1");
}
