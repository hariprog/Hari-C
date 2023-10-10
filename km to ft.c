#include<stdio.h>
int main()
{
	double km,m,cm,ft,in;
	scanf("%lf",&km);
	m=km*1000;
	cm=km*100000;
	ft=km/0.0003048;
	in=km/0.0000254;
	printf("%lf\n %lf\n %lf\n %lf\n",m,cm,ft,in);
	return 0;
}
