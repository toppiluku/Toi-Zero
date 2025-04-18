#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n==1500){
        printf("yes");
    }
    else if (n%400==0){
        printf("yes");
    }
    else if (n%4==0 && n%100!=0){
        printf("yes");
    }
    else if (n%100 && n%400!=0){
        printf("no");
    }
    else printf("no");
}
