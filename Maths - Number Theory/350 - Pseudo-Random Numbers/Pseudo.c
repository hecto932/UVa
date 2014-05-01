#include <stdio.h>

int main()
{
	long long int z,i,m,l,cont,y,Case=0,x,flag;
	long long int d[10000+10];
	while(scanf("%lld %lld %lld %lld\n",&z,&i,&m,&l)==4)
	{
		if(z==0 && i==0 && m==0 && l==0) break;
		for(x=0;x<10000;++x) d[i]=0;
		cont=0,d[0]=l,y=1,flag=1;
		while(flag)
		{
			l=(z*l+i)%m;
			d[y]=l;
			for(x=y-1;x>0;--x)
			{
				if(d[x]==d[y])
				{
					cont=y;
					flag=0;
					break;
				}
			}
			++y;
		}
		printf("Case %lld: %lld\n",++Case,--cont);
	} 
	
	return 0;
}