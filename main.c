#include <stdio.h>
#include <math.h>

void korni()
{
	float a,b,c,d;
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
	else 
	{
		d = b*b-4*a*c;
		d = sqrt(d);
		if (d < 0)
		{
			printf("korney net\n");
		}
	}	
	return 0;
}