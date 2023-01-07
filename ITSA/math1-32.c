#include <stdio.h>

int main(){
    int a, x, y, z, tmp;
    scanf("%d", &a);
    tmp = a;
    z = tmp%10;
    tmp /= 10;
    y = tmp%10;
    tmp /= 10;
    x = tmp;
    if(x*x*x + y*y*y + z*z*z == a) printf("Yes\n");
    else printf("No\n");
    return 0;
}