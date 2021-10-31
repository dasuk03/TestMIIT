#include <iostream>
#include <cmath>
using namespace std;


int main(){
	double sum = 0; double res = 1;
	float n = 0; float a,b;
	cout << "Vvedi n: ";
	cin >> n; cout << endl;
	
	// n = 1 - сколько эл всего
	
	for (int i = 0; i < n; i++){
		res = 1;
		for (int u = 1; u <= i; u++) {
			res = res * u;
  		}
		a = pow((-1),i);
		cout << " a = " << a << endl;
		cout << " res = " << res << endl;
		sum = sum + (a/res);
		cout << " sum = " << sum << endl;
	}
	
	cout << sum;

	return 0;
}
