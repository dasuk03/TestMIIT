#include <iostream>
using namespace std;

int main(){
	float R1, R2, R3, R;
	
	cout << "Vvedi R1, R2, R3: ";
	cin >> R1 >> R2 >> R3;
	
	R = 1/((1/R1) + (1/R2) + (1/R3));
	
	cout << "R cepi = " << R << endl;
	return 0;
}
