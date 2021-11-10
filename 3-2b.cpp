#include <iostream>
#include <cmath>
using namespace std;

double faktorial(int i){ // факториал числа

	double res = 1; // начально значение факториала !0 = 1
	for (int u = 1; u <= i; u++) {
		res = res * u;
	}
	return res; // Возвращает значение факториала 

	/*
	Функция faktorial принимает номер элемента факториала
	и возвращает его значение
	*/
}

double summa() {
	
	float a,b,e;
	float n = 0; double sum = 0, sume = 0;
	
	cout << "Введи n: ";
	cin >> n; cout << endl;
	
	cout << "С какого значения элемента будем записывать его в сумму : ";
	cin >> e; cout << endl;
	
	if (!n || !e) {  // Проверка формата ввода
		cout << "Введи число! " << endl;
	}
	else {
	
		for (int i = 0; i < n; i++){
				
			// faktorial(i); // Вызов факториала i элемента
			
			a = pow((-1),i); // Степень (-1) 
			
			// cout << " a = " << a << endl;
			// cout << " res = " << faktorial(i) << endl;
			
			sume = (a/faktorial(i)); // Счётчик значения элемента
			if (sume >= e){ // Проверка значения элемента суммы на > e
				sum = sum + sume; // если элемент > e то записываем его в сумму 
			}
			
		}
		cout << "Сумма ряда при Sn > "<< e << " = " << sum << endl;
	}
	/*
	Функция считывает значения n и e 
	Проверяет их на правильность ввода
	Считает каждый элемент суммы и проверяет больше ли он числа e 
	Если больше этот элемент записывается в сумму (нет - нет)
	*/
}

int main(){

	setlocale( LC_ALL,"Russian" ); // Вывод Кириллицы 
	summa(); // Вызов функции подсчёта суммы 
	return 0; // успешное завершение кода
}
