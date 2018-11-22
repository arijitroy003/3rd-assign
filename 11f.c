#include <stdio.h>
void printDiv(int n,int n1)
{
    if (n1==0)
        return;
  	else if(n%n1==0)
  	{
  		printf("%d ",n1);
  	}
  	return printDiv(n,n1-1);
}
int main()
{
	int n,n1;
	printf("Enter a number : \n");
	scanf("%d",&n);
	n1=n;
	printf("The divisors of %d are \n",n);
	printDiv(n,n1);
	printf("\n");
}	