#include <stdio.h>
char a;
int main() {
    int temp;
    scanf("%d %c",&temp,&a);
    a = toupper(a);
    if (a == 'F'){
        temp = (temp - 32) * 5 / 9;
    }
    if (temp <= 0){
        printf("solid");
    }
    else if (temp >= 100){
            printf("gas");
    }
    else{
        printf("liquid");

    }
}
