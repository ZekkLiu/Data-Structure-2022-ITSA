#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        printf("%d*%d=%d\n", i+1, i+1, (i+1)*(i+1));
    } 
    return 0;
}