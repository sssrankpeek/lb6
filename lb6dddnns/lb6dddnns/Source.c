#include <stdio.h>
#include <locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	float x,y;
	puts("������� ���");
	scanf("%d", &yeas);
	if (((yeas % 4 == 0) || (yeas % 400 == 0)) && (yeas % 100 !=0))
		printf("��� %d ����������", yeas);
	else
		printf("��� %d �� ����������", yeas);
	
	puts("\n������� �");
	scanf("%f", &x);
	(x <= 3) ? printf("%g", y = -(x * x) + (3 * x) + 9) : printf("%g", y = x / ((x * x) + 1));
	
	float z, X, c;
		puts("\n������� �����");
		scanf("%f%f%f", &z, &X, &c);
		printf("������� ����� z=%g, X=%g, c=%g", z, X, c);
		if (z > -1 && z < 1)
		printf("\n����� z ����������� ������� (-1,1)");
		if (X > -1 && X < 1)
		printf("\n����� X ����������� ������� (-1,1)");
		if (c > -1 && c < 1)
		printf("\n����� c ����������� ������� (-1,1)");
	



}