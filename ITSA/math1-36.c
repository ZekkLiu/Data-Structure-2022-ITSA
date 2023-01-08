#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a==12||a==1||a==2) printf("Winter\n");
    else if(a==3||a==4||a==5) printf("Spring\n");
    else if(a==6||a==7||a==8) printf("Summer\n");
    else printf("Autumn\n");
    return 0;
}