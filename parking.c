#include<stdio.h>
int main()
{
    int hours,fee;
    printf("Enter parking hours:");
    scanf("%d",&hours);
    if(hours<=2)
        fee=20;
    else
        fee=20+(hours-2)*10;
    printf("Parking fee=%d",fee);
    return 0;
}