#include <stdio.h>

int main(){
    int a, x, y, z, tmp;
    scanf("%d", &a);
    tmp = a;
    z = tmp%10; // 個位數 = z
    tmp /= 10;
    y = tmp%10; // 十位數 = y
    tmp /= 10;
    x = tmp; // 百位數 = x
    if(x*x*x + y*y*y + z*z*z == a) printf("Yes\n");
    else printf("No\n");
    return 0;
}