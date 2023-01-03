#include <stdio.h>

int main(){
    int startHour, startMinute, endHour, endMinute;
    int deltaHour, deltaMinute;
    scanf("%d %d\n%d %d", &startHour, &startMinute, &endHour, &endMinute);
    deltaHour = endHour - startHour;
    deltaMinute = endMinute - startMinute + deltaHour * 60;
    if(deltaMinute < 120) printf("%d\n", (deltaMinute / 30) * 30);
    else if(deltaMinute < 240) printf("%d\n", 120 + ((deltaMinute - 120) / 30) * 40);
    else printf("%d\n", 280 + (deltaMinute - 240) / 30 * 60);
    return 0;
}