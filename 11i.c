#include <stdio.h>
int toBin(int n)
{
	if(n==0)
		return 0;
	else
		return (n%2 + (10*toBin(n/2)));
}
int main()
{
	int dec,binary;
	printf("Enter a decimal number : \n");
	scanf("%d",&dec);
	binary=toBin(dec);
	printf("The number in binary is %d\n",binary);
}