#include <iostream>
#include <cmath>
using namespace std;

//! Функция нахождения объёма шара
/*! Принимает значение радиуса, возвращает значение объёма */
float getVolume(float radius);

//! Функция нахождения площади поверхности шара
/*! Принимает значение радиуса, возвращает значение площади поверхности */
float getArea(float radius);


int main(){
	float radius; /*! Для значения радиуса */
	setlocale( LC_ALL,"Russian" ); /*! служит для корректного вывода Кириллицы */
	cout << "Введи radius: ";
	cin >> radius;
	
	cout << "V шара (объём) = " << getVolume(radius) << endl;
	cout << "S шара (площадь поверхности)= " << getArea(radius) << endl;

	return 0; 
}

float getVolume(float radius){
	float Volume; /*! Для значения объёма шара */
	Volume = (4*M_PI*radius*radius*radius)/(3.0);
	return Volume; /*! Возвращает значение объёма шара */
	
}

float getArea(float radius){
	float Area; /*! Для значения площади поверхности шара */
	Area = 4*M_PI*radius*radius;
	return Area; /*! Возвращает значение площади поверхности шара */
}
