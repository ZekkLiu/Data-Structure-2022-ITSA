#include <stdio.h>

int main(){
    double temperature;
    scanf("%lf", &temperature);
    printf("%.1lf\n", (temperature * 9)/5.0 + 32);
    return 0;
}