#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int toSeconds(int hours, int minutes, int seconds){
   return (hours*3600)+minutes*60+seconds;
}
int main() {
int hours,minutes,seconds;
    scanf("%d %d %d",&hours,&minutes,&seconds);
    int totalseconds = toSeconds(hours, minutes,seconds);
       printf("Total seconds: %d\n",totalseconds);
    return 0;
}
