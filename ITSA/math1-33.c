#include <stdio.h>

int pnFunction(int c){ // perfect number function
    int sum=0;
    for(int i=1; i<c; i++){
        if(c%i==0) sum += i;
    }
    return sum;
}

int main(){
    int a;
    scanf("%d", &a);
    int ans[a], j=0;
    for(int i=1; i<a; i++){
        if(i == pnFunction(i)) ans[j++] = i;
    }
    for(int i=0; i<j; i++){
        printf("%d", ans[i]);
        if(i==j-1) printf("\n"); // 嚴格比對
        else printf(" ");
    }
    return 0;
}