#include <stdio.h>

int main(){
    int a, sum=0;
    scanf("%d", &a);
    for(int i=1; i<a; i++){
        if(i%6==0 && i%12 != 0) sum += i; // 是6但不是12的倍數
    }
    printf("%d\n", sum);
    return 0;
}