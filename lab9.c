#include <stdio.h>
#include <math.h>

int getDigit(int number, int digit) {
	return ((int) (number / pow(10, digit - 1)) % 10);
}

int main() {
	int smnum;
	int d1, d2, d3, d4, d5, d6;
	//ПРОГРАММА НА 3
	printf("Введите 6значное число: ");
	scanf("%d", &smnum);
	if (((smnum / 100000) < 1) || ((smnum / 100000) > 10)) return 0;
	d1 = smnum % 10;
	d2 = (smnum / 10) % 10;
	d3 = (smnum / 100) % 10;
	d4 = (smnum / 1000) % 10;
	d5 = (smnum / 10000) % 10;
	d6 = (smnum / 100000) % 10;
	printf("%d%d%d %d%d%d\n", d6, d5, d4, d3, d2, d1);
	if ((d1 + d2 + d3) == (d4 + d5 + d6)) printf("Счастливое\n");
	else printf("Неудачное\n");

    
	//ПРОГРАММА НА 4
	int secnum;
	printf("\nВведите 4значное число : ");
	scanf("%d", &secnum);
	d1 = getDigit(secnum, 1);
	d2 = getDigit(secnum, 2);
	d3 = getDigit(secnum, 3);
	d4 = getDigit(secnum, 4);
	printf("%d %d %d %d\n", d4, d3, d2, d1);
	if ((d4 == d1) && (d3 == d2)) printf("Палиндром\n");
	else printf("Не Палиндром\n");

}