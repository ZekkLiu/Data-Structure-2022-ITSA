#include <stdio.h>

int main(){
    int time, pay;
    double salary=0;
    scanf("%d %d", &time, &pay);
    if(time>120){
        salary += (time-120)*pay*1.66;
        time = 120; // 有超過120小時代表前面必定做了120小時
    }
    if(time>60){
        salary += (time-60)*pay*1.33;
        time = 60; // 有超過60小時代表前面必定做了60小時
    }
    if(time>0){
        salary += time*pay;
    }
    printf("%.1lf\n",salary);
    return 0;
}