#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, sqrt_d, x1, x2;
	printf("Wwedite koeficient a: \n");
	scanf("%f", &a);
	printf("Wwedite koeficient b: \n");
	scanf("%f", &b);
	printf("Wwedite koeficient c: \n");
	scanf("%f", &c);
	if (a == 0)
	{
		printf("Ne kvadratnoe uravnenie\n");
		return -1;
	}
	d = b * b - 4 * a * c;
		if (d < 0)
	{
		printf("korney net\n");
		return 1;
	}
	else 
	{
		sqrt_d = sqrt(d);
		x1 = (-b + sqrt_d) / (2 * a);
		x2 = (-b - sqrt_d) / (2 * a);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}	
	return 0;
}