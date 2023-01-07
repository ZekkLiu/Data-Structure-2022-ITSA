#include <stdio.h>

int main(){
    int time;
    scanf("%d", &time);
    if(time<=800) printf("%.1lf\n", time*0.9);
    else if(time<1500) printf("%.1lf\n", time*0.9*0.9);
    else printf("%.1lf\n", time*0.9*0.79);
    return 0;
}