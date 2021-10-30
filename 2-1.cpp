#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float u, a, b, h, r, Sk, St;

	cout << "Kakuyu S budem schitat? 0 - krug, 1 - trapeciya: ";
	cin >> u; cout << endl;
	
	if (u == 0){ //krug
		cout << "Vvedi radius r: ";
		cin >> r; cout << endl;
		Sk = 3.14*r*r;
		cout << "S kruga = " << Sk << endl;
	}
	if (u == 1){ //trapiceya
		cout << "Vvedi vverh osnovanie a: ";
		cin >> a; cout << endl;
		cout << "Vvedi nijn osnovanie b: ";
		cin >> b; cout << endl;
		cout << "Vvedi vysotu h: ";
		cin >> h; cout << endl;
		St = (0.5)*(a+b)*h; 
		cout << "S trapecii = " << St << endl;
	}
	if (u != 1 && u != 0) {
		cout << "Err! Tolko 1 or 0!" << endl;
	}

	return 0;
}
