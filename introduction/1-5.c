#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES

int main()
{
	//const double pi = atan(1)*4; 
	const double pi = M_PI; 
	double r, h, s1, s2, s;
	scanf("%lf%lf", &r, &h);
	s1 = pi * r * r;
	s2 = 2 * pi * r * h;
	s = s1 * 2.0 + s2;
        printf("Area = %.3lf\n", s);
        return 0;
}	

