// Digital clock mini project //

#include<stdio.h>
#include<windows.h>
int main()
{
   int hour,min,sec;
   int d=1000;
   printf("set Time : \n");
   scanf("%d %d %d",&hour,&min,&sec);
    if(hour>12 ||min>60 ||sec>60)
    {
        printf("Error ! \n");
        exit(0);
    }
    while(1)
    {
        sec++;
        if(sec>59)
        {
            min++;
            sec=0;
        }
        if(min>59)
        {
            hour++;
            min=0;
        }
        if(hour>12)
        {
            hour=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",hour,min ,sec);
        Sleep(d);
        system("cls");
    }

}
