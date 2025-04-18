#include <stdio.h>
char c[4], val[10];
int main() {
    int i = 0, len = 0;
    scanf("%s", c);

    while (c[len]) {
        if (c[len] >= 'a' && c[len] <= 'z')
            c[len] -= 32;
        len++;
    }
    if (len == 3) val[0] = '1', val[1] = '0', val[2] = '\0';
    else if (c[0] == 'A') sprintf(val, "ace");
    else if (c[0] == 'J') sprintf(val, "jack");
    else if (c[0] == 'Q') sprintf(val, "queen");
    else if (c[0] == 'K') sprintf(val, "king");
    else val[0] = c[0], val[1] = '\0';

    // ´Í¡ä¾è
    char *suit = (c[len-1] == 'D') ? "diamonds" :
                 (c[len-1] == 'H') ? "hearts" :
                 (c[len-1] == 'S') ? "spades" :
                 (c[len-1] == 'C') ? "clubs":"suit";
                ;

    printf("%s of %s\n", val, suit);
    return 0;
}
