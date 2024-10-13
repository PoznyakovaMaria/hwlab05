//вариант 20
#include <locale.h>      
#include <stdio.h> 
#include <math.h>
#define _USE_MATH_DEFINES
#define d 1

float urav(float x, float y) {
	float otv = ((pow(cos(y), 3)) + (pow(2, x) * d)) / ((exp(y)) + (log(pow(sin(x), 2) + 7.4)));
	return otv;
}

main() {

	setlocale(LC_ALL, "RUS");
	float x, y;
	puts("Введите x...");
	scanf_s("%f", &x);
	puts("Введите y...");
	scanf_s("%f", &y);
	printf("Ответ: %.5f", urav(x, y));
}