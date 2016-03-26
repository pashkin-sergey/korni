#include <stdio.h>
#include <math.h>

void input()
{
	float a,b,c;
	printf("Wwedite koeficient a: \n");
	scanf("%f",&a);
	printf("Wwedite koeficient b: \n");
	scanf("%f",&b);
	printf("Wwedite koeficient c: \n");
	scanf("%f",&c);
	if (a==0)
	{
		printf("Ne kvadratnoe uravnenie");
	}
	return 0;
}