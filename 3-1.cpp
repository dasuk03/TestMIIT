#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float y, x, dx;
	x = 0.4;
	dx = 0.05;
	
	while (x <= 1) {
		
		y = x + sqrt(x) + pow(x, 1/3) - 2.5;
		cout << "pri x = " << x << " -> y = " << y << endl;
		
		x += dx;
	}
	
	return 0;
}
