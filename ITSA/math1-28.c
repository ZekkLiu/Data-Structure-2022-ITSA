#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=35; i<=a; i+=35){
        printf("%d", i);
        if(i+35 < a) printf(" ");
    }
    printf("\n");
    return 0;
}