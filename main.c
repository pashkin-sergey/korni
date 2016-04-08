#include <stdio.h>
#include <math.h>

void korni()
{
	float a, b, c, d;
	printf("Wwedite koeficient a: \n");
	scanf("%f", &a);
	printf("Wwedite koeficient b: \n");
	scanf("%f", &b);
	printf("Wwedite koeficient c: \n");
	scanf("%f", &c);
	if (a == 0)
	{
		printf("Ne kvadratnoe uravnenie");
		return -1;
	}
	d = b * b - 4 * a * c;
		if (d < 0)
	{
		printf("korney net\n");
	}
	else 
	{
		d = sqrt(d);
		x1 = (-b + d) / (2 * a);
		x2 = (-b - d) / (2 * a);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}	
	return 0;
}