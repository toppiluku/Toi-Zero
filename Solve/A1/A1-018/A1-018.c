#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    const char *r[9] = {"I","II","III","IV","V","VI","VII","VIII"};

    if (n < 0){
        printf("Error : Please input positive number");
    }
    else if (n < 1 || 9 < n){
        printf("Error : Out of range");
    }
    else{
        printf("%s",r[n-1]);
    }
}
