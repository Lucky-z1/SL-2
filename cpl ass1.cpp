#include<stdio.h>
int main()
{
	int x,y,i;
	int res=1;
	printf("Enter the value of the number x:");
	scanf("%d",&x);
	printf("Enter power to be raised y:");
	scanf("%d",&y);
	i=1;
	while(i<=y)
	{
		res=res*x;
		i++;
	}
	printf("result of the operation is %d",res);
	return 0;
	
}
