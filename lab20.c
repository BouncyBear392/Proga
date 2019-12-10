#include <stdio.h>
	//ПРОГРАММА НА 3
int task1() {
	int count, lg = 2, lr = 4;
	printf("Введите количество: ");
	scanf("%d", &count);
	int max_g = count / lg;
	printf("Гусь\tКролик\n");
	for (int pg, pf, nr, ng = 0; ng <= max_g; ng++) {
		pg = ng * lg;
		pf = count - pg;
		nr = pf / lr;
		if (pf % lr != 0) continue;
		printf("%d\t%d\n", ng, nr);
	}
}
	//ПРОГРАММА НА 4
int task2() {
	int sum;
	printf("Введите сумму: ");
	scanf("%d", &sum);
	int k2 = 2, k5 = 5, k10 = 10;
	int max_k2 = sum / k2;
	printf("2РУБ\t5РУБ\t10РУБ\n");
	for (int pk2, max_k5, nk2 = 0; nk2 <= max_k2; nk2++) {
		pk2 = nk2 * k2;
		max_k5 = (sum - pk2) / k5;
		for (int pk5, pk, pk10, nk5 = 0; nk5 <= max_k5; nk5++) {
			pk5 = nk5 * k5;
			pk = sum - pk2 - pk5;
			pk10 = pk / k10;
			if (pk % k10 != 0) continue;
			printf("%d\t%d\t%d\n", nk2, nk5, pk10);
		}
	}
}
	//ПРОГРАММА НА 5
int task3() {
	int sum, hc, bc;
	printf("Введите сумму: ");
	scanf("%d", &sum);
	printf("Стоимость лошади: ");
	scanf("%d", &hc);
	printf("Стоимость быка: ");
	scanf("%d", &bc);
	int max_b = sum / bc;
	printf("Лошадь\tБык\n");
	for (int pb, pan, ph, n = max_b; n >= 0; n--) {
		pb = n * bc;
		pan = sum - pb;
		ph = pan / hc;
		if (pan % hc != 0) continue;
		printf("%d\t%d\n", ph, n);
	}
}

int main() {
	task1();
}