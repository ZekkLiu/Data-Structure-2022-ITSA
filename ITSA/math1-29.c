#include <stdio.h>

int is_prime(int c){ // 質數判斷function
	if(c==1){
		return 1;
	}else{
		for(int i=2; i<c; i++){
			if(c%i==0){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
    int a;
    scanf("%d", &a);
    a--; // a本身不算
    while(is_prime(a)) a--;
    printf("%d\n", a);
    return 0;
}