#include<stdio.h>
int main() {
	float  a, b, c, d, e, f, g, h, i, j;
	float x = 0;
	printf("Enter the Hieght of First Children : ");
	scanf_s("%f", &a);
	printf("\nThe Hieght of first Children is %.2f\n",a);
	a = a / 10;
	printf("\nEnter the Hieght of Second Children : ");
	scanf_s("%f", &b);
	printf("\nThe Hieght of Second Children is %.2f\n", b);
	b = b / 10;
	printf("\nEnter the Hieght of Third Children : ");
	scanf_s("%f", &c);
	printf("\nThe Hieght of Third Children is %.2f\n", c);
	c = c / 10;
	printf("\nEnter the Hieght of Fourth Children : ");
	scanf_s("%f", &d);
	printf("\nThe Hieght of Fourth Children is %.2f\n", d);
	d = d / 10;
	printf("\nEnter the Hieght of Five Children : ");
	scanf_s("%f", &e);
	printf("\nThe Hieght of Five Children is %.2f\n", e);
	e = e / 10;
	printf("\nEnter the Hieght of Six Children : ");
	scanf_s("%f", &f);
	printf("\nThe Hieght of Six Children is %.2f\n", f);
	f = f / 10;
	printf("\nEnter the Hieght of Seven Children : ");
	scanf_s("%f", &g);
	printf("\nThe Hieght of Seven Children is %.2f\n", g);
	g = g / 10;
	printf("\nEnter the Hieght of Eight Children : ");
	scanf_s("%f", &h);
	printf("\nThe Hieght of Eight Children is %.2f\n", h);
	h = h / 10;
	printf("\nEnter the Hieght of Nine Children : ");
	scanf_s("%f", &i);
	printf("\nThe Hieght of Nine Children is %.2f\n", i);
	i = i / 10;
	printf("\nEnter the Hieght of Ten Children : ");
	scanf_s("%f", &j);
	printf("\nThe Hieght of Nine Children is %.2f\n", j);
	j = j / 10;
	x = a + b + c + d + e + f + g + h + i + j;
	printf("\nAverage Height of Children is %.2f", x);
	return 0;

}