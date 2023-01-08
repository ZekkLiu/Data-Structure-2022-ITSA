#include <stdio.h>

int main(){
    int  top, bottom, height;
    float area;
    scanf("%d %d %d", &top, &bottom, &height);
    area = ((top + bottom) * height) / 2.0; //梯形面積公式 : ( 上底+下底 ) * 高 / 2
    printf("Trapezoid area:%.1f\n", area);
    return 0;
}