#include <stdio.h>
char s[11],m[11];
int n[10],i,j=0;
int main(){
    scanf("%s", s);
    for(i=1;i<=5;i++){
        m[j]=s[i-1];
        if(s[i]==s[i-1]) n[j]++;
        else j++;
    }
    for(i=0;i<j;i++){
        printf("%d%c",n[i]+1,m[i]);
    }
}
