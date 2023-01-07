#include <stdio.h>

int main(){
    int a, sum=0;
    scanf("%d", &a);
    for(int i=0; i<=a; i+=3){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}