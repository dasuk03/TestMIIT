#include <iostream>
using namespace std;

float R(float R1, float R2, float R3) {
	return 1/((1/R1) + (1/R2) + (1/R3));
	/*
	return возвращает значение Сопротивления цепи
	*/
}

int main(){
	float R1, R2, R3;
	
	setlocale( LC_ALL,"Russian" ); // Правильный вывод Кириллицы 
	
	cout << "Введи сопротивления R1, R2, R3: ";
	
	cin >> R1 >> R2 >> R3;
	
	if (!R1 || !R2 || !R3) {
		cout << "Надо вводить числа! " << endl;
	}
	else {
	cout << "Сопротивление цепи = " << R(R1, R2, R3) << endl;
	}
	
	return 0; // Успешное завершение кода
}
