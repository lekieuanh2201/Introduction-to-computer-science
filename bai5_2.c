#include<stdio.h>
int main()
{
	int n,i;
	do{
	scanf("%d",&n);
	}
	while(n>=10000);
	int x[n];
	for(i=1;i<=n;++i)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n;++i)
	{
		printf("%d ",x[i]);
	}
	return 0;
}
