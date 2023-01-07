#include <stdio.h>

int main(){
    int time, days, hours, minutes, seconds;
    scanf("%d", &time);
    days = time / 86400;
    time %= 86400;
    hours = time / 3600;
    time %= 3600;
    minutes = time / 60;
    time %= 60;
    seconds = time;

    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", days, hours, minutes, seconds);

    return 0;
}