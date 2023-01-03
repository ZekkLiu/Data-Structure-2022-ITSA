#include <stdio.h>

int main(){
    int a;
    double time;
    scanf("%d", &a);
    time = a / (1 - ((30 * 2.54) / 100.0));
    if(time - (int)time) printf("%d\n", (int)time+1);
    else printf("%d\n", (int)time);
    return 0;
}