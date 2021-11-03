#include <iostream>
#include <cmath>
using namespace std;

float Sk() {
	float r;
	
	cout << "Введи радиус круга r: ";
	cin >> r; cout << endl;
	
	if (!r && r =< 0) { 										   // Проверка на формат ввода и на существование Радиуса (Радиус > 0!)
		
		cout << "Введи существующий r! " << endl;
		
	}
	else {
		
		cout << "Площадь круга S = " << return (3.14*r*r) << endl; // Возвращает площадь круга
		
	}
	
	/*
	Функция Sk зывается при выборе круга и требует ввода Радиуса
	Возвращает значение Площади круга
	*/
}

float St() {
	float a, b, h;
	
	cout << "Введи верхнее основание a: ";
	cin >> a; cout << endl;
	
	cout << "Введи нижнее основание b: ";
	cin >> b; cout << endl;
	
	cout << "Введи высоту h: ";
	cin >> h; cout << endl;
	
	if (!a || !b || !h || a < 0 || b < 0 || h < 0){ 			   // Проверка ввода данных и проверка их существование (Стороны и Высота всегда > 0!)
		
		cout << "Введи существующие данные! " << endl;
		
	}
	else {
		
		St = (0.5)*(a+b)*h; 
		cout << "S trapecii = " << return (3.14*r*r) << endl; 	   // Возвращает площадь круга
		
	}
	/*
	Функция St зывается при выборе трапеции и требует ввода двух оснований и высоты
	Возвращает значение Площади трапеции
	*/
}

int main(){
	float u, a, b, h;
	
	setlocale( LC_ALL,"Russian" ); 				// Правильный вывод Кириллицы
	
	cout << "Чью площадь будем считать? 0 - круг, 1 - трапеция: ";
	cin >> u; cout << endl;
	
	if ( u!=0 && u!=1 && !u ) {
		cout << "Введи по формату! (0 - круг, 1 - трапеция) " << endl;
	}
	else {
		if (u == 0){ 							// Если ввели 0 - выбрали Круг
			
			Sk(); 								// Вызов функции Площади круга
			
		}
		if (u == 1){ 			 				// Если ввели 1- выбрали Трапецию
			
			St();								// Вызов функции Площади трапеции
			
		}
		if (u != 1 && u != 0) { 				// Уведомление если выбрали не 0\1 
			cout << "Ввод по формату! 0 - круг, 1 - трапеция " << endl;
		}
	}
	return 0; // Успешное завершение кода
}
