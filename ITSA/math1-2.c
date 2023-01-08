#include <stdio.h>

int main(){
    int bottom, height;
    float area;
    scanf("%d %d", &bottom, &height);
    area = bottom * height / 2.0; // 三角形面積公式 : 底 * 高 / 2
    printf("%.1f\n", area);
    return 0;
}