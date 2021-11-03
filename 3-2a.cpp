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
	
	float a,b;
	float n = 0; double sum = 0;
	cout << "Введи n: ";
	cin >> n; cout << endl;
	
	if (!n) {
		cout << "Введи число! " << endl;
	}
	else {
	
		for (int i = 0; i < n; i++){
				
			// faktorial(i); // Вызов факториала i элемента
			
			a = pow((-1),i); // Степень (-1) 
			
			// cout << " a = " << a << endl;
			// cout << " res = " << faktorial(i) << endl;
			
			sum = sum + (a/faktorial(i)); // Счётчик суммы 
			
		}
		cout << "sum = " << sum << endl; // Вывод суммы 
	}
}

int main(){
	
	setlocale( LC_ALL,"Russian" ); // Вывод Кириллицы
	summa(); // Вызов функции подсчёта суммы 
	return 0; // Успешное завершение кода
	
}
