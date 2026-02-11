#include <stdio.h>

int main()
{
    int small,big,goal;
    printf("enter the no. of small:\n");
    printf("enter the no.of big:\n");
    printf("enter the no.of goal:\n");
    scanf("%d %d %d",&small,&big,&goal);
    int req=goal/5;
    if(req<=big)
    {
    	int rem=goal-req*5;
	    if(rem<=small)
	    {
	    	printf("true");
		}
		else
		{
			printf("false");
		}
	}
	else
	{
	    int rem=goal-big*5;
	    if(rem<=small)
		{
	    	printf("true");
		}
		else
		{
			printf("false");
		}
	}
	return 0;
}
