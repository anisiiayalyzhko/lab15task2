// lab15task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>

int main() {
	//масив на 3 елементи
	int array[3], i, equal = 1;
	//виводимо дані про те що потрібно зробити користувачу
	printf("Enter 3 numbers:\n");
	//вводимо три елементи масиву
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &array[i]);
	}
	for (i = 0; i < 2; i++) {

		if (array[i] != array[i + 1]) {
			equal = 0;
			break;

		}
	}
//якщо
	if (equal) {

	//вивести
		printf("Numbers are equal\n");
}
	else {
	//мінімальне значення
		int min_array = array[0];
//знаходження найменшого
		for (i = 0; i < 3; i++) {
		//перевірка чи менше i-ий елемента ніж значення в змінній
			if (array[i] < min_array) {
//надати змінній мінімальне значення нового значення
				min_array = array[i];
			}
		}
//вивести результат (мінімальне значення)
		printf("Min:%d\n", min_array);
	}
	return 0;
}

