#include <stdio.h>
unsigned long long rank(int x){
    unsigned long long total=1;
    for(int i=1; i<=x; i++){
        total *= i;
    }
    return total;
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%llu\n", rank(a));
    return 0;
}