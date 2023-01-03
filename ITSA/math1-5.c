#include <stdio.h>

int main(){
    double a;
    scanf("%lf", &a);
    a *= a;
    a += 0.01;
    printf("%.1lf\n", a);
    return 0;
}