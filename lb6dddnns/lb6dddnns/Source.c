#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	float x,y;
	puts("введите год");
	scanf("%d", &yeas);
	if (((yeas % 4 == 0) || (yeas % 400 == 0)) && (yeas % 100 !=0))
		printf("Год %d високосный", yeas);
	else
		printf("Год %d не високосный", yeas);
	
	puts("\nвведите х");
	scanf("%f", &x);
	(x <= 3) ? printf("%g", y = -(x * x) + (3 * x) + 9) : printf("%g", y = x / ((x * x) + 1));
	
	float z, X, c;
		puts("\nвведите числа");
		scanf("%f%f%f", &z, &X, &c);
		printf("введены числа z=%g, X=%g, c=%g", z, X, c);
		if (z > -1 && z < 1)
		printf("\nЧисло z принадлежит отрезку (-1,1)");
		if (X > -1 && X < 1)
		printf("\nЧисло X принадлежит отрезку (-1,1)");
		if (c > -1 && c < 1)
		printf("\nЧисло c принадлежит отрезку (-1,1)");
	



}