#include <stdio.h>
int main(){
    int d,m;
    scanf("%d %d",&d,&m);
    const char *a[13] = {"capricorn", "aquarius", "pisces", "aries", "taurus", "gemini",
     "cancer", "leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn"};
    int day[12] = {20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22};
    if (d >= day[m-1]){
        printf("%s",a[m]);
    }
    else{
        printf("%s",a[m-1]);
    }
}
