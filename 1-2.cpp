#include <iostream>
using namespace std;

int main(){
	float R, V, S;
	
	cout << "Vvedi R: ";
	cin >> R;
	
	if (!R){
		cout << "Vvedi chislo! " << endl;
	}
	else {
	V = (4/3)*(3.14)*R*R*R;
	S = 4*(3.14)*R*R;
	
	cout << "V shara = " << V << endl;
	cout << "S shara = " << S << endl;
	}
	return 0;
}
