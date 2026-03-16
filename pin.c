#include<stdio.h>
int main()
{
    int pin,correctPin =1234;
    printf("Enter PIN:");
    scanf("%d",&pin);
    if(pin==correctPin)
        printf("Phone Unlocked");
    else
        printf("Incorrect PIN");
    return 0;
}