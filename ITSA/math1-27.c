#include <stdio.h>

int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);

    if(a>b){ // SWAP, a小b大
        int tmp = a;
        a = b;
        b = tmp;  
    }

    for(int i=a; i<=b; i++){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}