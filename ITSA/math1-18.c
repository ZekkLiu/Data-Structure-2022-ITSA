#include <stdio.h>

int main(){
    int a, ans[9];
    scanf("%d", &a);
    if(a>0){
        for(int i=0; i<8; i++){
            ans[i] = a%2;
            a /= 2;
        }
        for(int i=0; i<8; i++){
            printf("%d", ans[7-i]);
        }  
        printf("\n");
    }

    else{
        a = -a-1; // 因為0是0000,0000
        for(int i=0; i<8; i++){ // 先用正的算
            ans[i] = a%2;
            a /= 2;
        }
        for(int i=0; i<8; i++){ //負數的1跟0與正數的相反
            if(ans[7-i]) printf("0");
            else printf("1");
        }  
        printf("\n");
    }
    return 0;
}