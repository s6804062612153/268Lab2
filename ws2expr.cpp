#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c, d;
	float A,B,C,D,E;
	
	a=1, b=1, c=5, d=1;
	A = (((3.0*a)/5)+(1.0/b));
	B = (3.0*a+5.0*b)/(2.0+c);
	C = (2.0/7.0)*((pow(4.0,3.0+c))-5.0*d);
	D = sqrt((2.0 + 8.0*b)/a);
	E = cbrt(pow(b,2.0)-4.0*d);
	printf("4.1\n");
	printf("WS2A = %.2f\nWS2B = %.2f\nWS2C = %.2f\nWS2D = %.2f\nWS2E = %.2f\n",A,B,C,D,E);
	
	a=9, b=2, c=0, d=1;
	A = (((3.0*a)/5)+(1.0/b));
	B = (3.0*a+5.0*b)/(2.0+c);
	C = (2.0/7.0)*((pow(4.0,3.0+c))-5.0*d);
	D = sqrt((2.0 + 8.0*b)/a);
	E = cbrt(pow(b,2.0)-4.0*d);
	printf("\n4.2\n");
	printf("WS2A = %.2f\nWS2B = %.2f\nWS2C = %.2f\nWS2D = %.2f\nWS2E = %.2f\n",A,B,C,D,E);
	
	a=0, b=3, c=3, d=3;
	A = (((3.0*a)/5)+(1.0/b));
	B = (3.0*a+5.0*b)/(2.0+c);
	C = (2.0/7.0)*((pow(4.0,3.0+c))-5.0*d);
	D = sqrt((2.0 + 8.0*b)/a);
	E = cbrt(pow(b,2.0)-4.0*d);
	printf("\n4.3\n");
	printf("WS2A = %.2f\nWS2B = %.2f\nWS2C = %.2f\nWS2D = %.2f\nWS2E = %.2f\n",A,B,C,D,E);
	
	return 0;
}