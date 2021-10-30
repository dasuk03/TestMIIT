#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a, x, y;
	
	a = 2.8;
	
	cout << "Vvedi x: ";
	cin >> x;
	
	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	if (x < 1.2) {
		y = a*x*x+4;
		cout << "x < 1.2" << endl;
	}
	else {
		y = (a + 4*x)*sqrt(pow(x,2*a));
		cout << "x >= 1.2" << endl;
	}
	cout << "y = " << y << endl;
	return 0;
}
