#include <iostream>
using namespace std;

int main(){
	float N[1000], x;
	setlocale( LC_ALL,"Russian" );
	cout << "Вводи числа (чтобы прекратить ввод - введи не число): "; // Если вводят число то программа работает и считает
	
	for (int i = 0; i < 1000; i++){ // Записывает в массив N числа от пользователя
		cin >> N[i];
		if (!N[i]) { // Проверка на число
			cout << " Ввод окончен!" << endl;
			for (int y = 1; y <= i; y++){
				if (N[y-1] < N[y]) {
					x += 1;
					
				}
			}
			cout << "Чисел больше: " << x << endl;
			return 0; // Успешное завершение кода
		}
	}
}
