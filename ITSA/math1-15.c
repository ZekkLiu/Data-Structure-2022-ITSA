#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x>100 || y>100 || x<0 || y<0) printf("outside\n");
    else printf("inside\n");
    return 0;
}