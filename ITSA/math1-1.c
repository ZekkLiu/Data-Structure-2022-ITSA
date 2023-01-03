#include <stdio.h>

int main(){
    int  top, bottom, height;
    float area;
    scanf("%d %d %d", &top, &bottom, &height);
    area = ((top + bottom) * height) / 2.0;
    printf("Trapezoid area:%.1f\n", area);
    return 0;
}