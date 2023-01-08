#include <stdio.h>

int is_prime(int c){ //質數判斷function
	if(c==1){
		return 0;
	}else{
		for(int i=2; i<c; i++){
			if(c%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
    int a;
    scanf("%d", &a);
    if(is_prime(a)) printf("YES\n");
    else printf("NO\n");
    return 0;
}