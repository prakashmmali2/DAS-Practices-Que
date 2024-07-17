#include<stdio.h>
void hannoifun(int n,char J,char L,char K)
{
	if(n==0)
	{
		return;
	}
	hannoifun(n-1,J,K,L);
	printf("\n Move disk %d from tower %c to tower %c",n,J,L);
	hannoifun(n-1,K,L,J);
	
}

int main()
{
	int n;
	//n implies the number of disk
	printf("Enter number of disks: ");
	scanf("%d",&n);
	hannoifun(n,'J','K','L');
	//J,K AND L are the name of rod
	return 0;
}
