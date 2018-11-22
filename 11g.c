#include <stdio.h>
long power(int x,int n)
{
	if(n==0)
		return 1;
	else
		return (x * power(x,n-1));
}
int main()
{
	int n,x;
	long y;
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter n : ");
	scanf("%d",&n);
	y=power(x,n);
	printf("%d^%d=%ld \n",x,n,y);
}