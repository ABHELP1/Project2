#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double a, b, c;
int main() {
	scanf("%lf%lf", &a, &b);
	c = pow(a, 2) + pow(b, 2);
		printf("%lf", sqrt(c));
}