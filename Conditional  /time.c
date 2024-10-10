#include <stdio.h>
#include <time.h>

int hour;

int main()
{
   time_t now;
   struct tm*now_tm;

   time(NULL);
   now_tm = localtime (&now);
   hour = (now_tm->tm_hour);
   printf("The hour in military time is: %d\n", hour);
   printf("Tell me the hour in military time:\n");
   scanf("%d", &hour);
   if(hour < 12){
    printf("Good Morning.\n");
   }else if (hour < 18){
    printf("Good Afternoon\n");
   }else{
    printf("Good Evening\n");
   }
    return 0;
}
