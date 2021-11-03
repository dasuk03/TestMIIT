#include <iostream>
#include <cmath>
using namespace std;

float f1(float x){
	float const a = 2.8;
	return (a*x*x+4); // Возвращает значение функции
	/*
	Функция f1 вызывается при x < 1.2 и 
	возвращает значение Функции (с такими Х)
	*/
}

float f2(float x){
	float const a = 2.8;
	return ((a + 4*x)*sqrt(pow(x,2*a))); // Возвращает значение функции
	/*
	Функция f2 вызывается при x >= 1.2 и 
	возвращает значение Функции (с такими Х)
	*/
}

int main(){
	float x;
	setlocale( LC_ALL,"Russian" ); //Правильный вывод Кириллицы
	
	cout << "Введи x: ";
	cin >> x;
	if(!x) { 	// if(!x) проверят формат ввода
		
		cout << "Надо вводить число! " << endl;
		
	}
	else {
											      
		cout << "x = " << x << endl;			
												
		if (x < 1.2) {						   // Проверка Х для выбора Формулы
			cout << "x < 1.2" << endl;        // Вывод условия выбора формулы решения 
			cout << "y = " << f1(x) << endl; // Вывод значения Формулы при x > 1.2
		}
		else {
			cout << "x >= 1.2" << endl;
			cout << "y = " << f2(x) << endl;
		}
		
	}
	return 0; // Успешное завершение Функции 
}
