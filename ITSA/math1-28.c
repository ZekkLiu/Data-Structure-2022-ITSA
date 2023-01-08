#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=35; i<=a; i+=35){ //是5和7的倍數 = 35的倍數
        printf("%d", i);
        if(i+35 < a) printf(" "); // 嚴格比對
    }
    printf("\n");
    return 0;
}