#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	float x1, x2;
	float t;
	float d;
	float s1, s2;
	int v1, v2;
	int a1, a2;

	printf("Расстояние между машинами: ");
	scanf("%f", &c);
	printf("Скорость первой машины: ");
	scanf("%d", &v1);
	printf("Скорость второй машины: ");
	scanf("%d", &v2);
	printf("Ускорение первой машины: ");
	scanf("%d", &a1);
	printf("Ускорение второй машины: ");
	scanf("%d", &a2);
	a = (a1 + a2) / 2;
	b = v1 + v2;
	c = -c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		if (x1 > x2) {
			printf("Время встречи: %.2f\n", x1);
			t = x1;
		} else {
			printf("Время встречи: %.2f\n", x2);
			t = x2;
		}
	} else if (d == 0) {
		t = -b / (2 * a);
		printf("Время встречи: %.2f\n", x1);
	} else {
		printf("Нет корней\n");
	}
	s1 = v1 * t + (a1 * t * t) / 2;
	s2 = v2 * t + (a2 * t * t) / 2;
	printf("Расст 1 маш: %.2f\n", s1);
	printf("РАсст 2 маш: %.2f\n", s2);
	int cost, ras1, ras2;
	float ob1, ob2, cost1, cost2;

	printf("РАсход 1: ");
	scanf("%d", &ras1);
	printf("Расход 2: ");
	scanf("%d", &ras2);
	printf("Стоимость масла: ");
	scanf("%d", &cost);
	ob1 = s1 * ras1 / 100;
	ob2 = s2 * ras2 / 100;
	cost1 = ob1 * cost;
	cost2 = ob2 * cost;
	printf("Объем 1: %.2f, cost 1: %.2f\n", ob1, cost1);
	printf("Объем 2: %.2f, cost 2: %.2f\n", ob2, cost2);
}