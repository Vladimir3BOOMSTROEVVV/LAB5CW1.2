#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#define M_PI            3.14159265358979323846
#include <math.h>


void main()
{
	system("chcp 1251");
	z1();
	z2();
}

int z1() {
	int gr;
	puts("Вычисление синуса угла. Введите градус угла:");
	scanf("%d", &gr);
	printf("Значение синуса угла %d : %lf\n", gr, sin(gr * M_PI / 180));
}

int z2() {
	double p = 0.5;
	double x;
	double a, b, y;
	puts("Введите значение X:");
	scanf("%lf", &x);
	a = log(pow(p, 2) + pow(x, 3));
	b = exp(pow(x, 1 / 2.f));
	y = pow(a, 3) / pow(b, 2);
	printf("Ответ: %.4lf", y);
}

