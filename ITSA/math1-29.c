#include <stdio.h>

int is_prime(int c){
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
    a--;
    while(is_prime(a)) a--;
    printf("%d\n", a);
    return 0;
}