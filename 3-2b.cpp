#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double sum = 0; double sume = 0; double res = 1;
	float n = 0; float a,b,e;
	cout << "Vvedi n: ";
	cin >> n; cout << endl;
	cout << "Vvedi s kakogo poroga zapisivaem v summu : ";
	cin >> e; cout << endl;
	
	if (!n || !e) {
		cout << " Eto ne chislo! " << endl;
	}
	else {
		for (int i = 0; i < n; i++){
			res = 1;
			for (int u = 1; u <= i; u++) {
				res = res * u;
	  		}
	  		
			a = pow((-1),i);
			sume = a/res;
			
			if (sume >= e){
				sum = sum + sume;
			}
		}
		cout << "Summa ryada pri Sn > "<< e << " = " << sum << endl;
	}
	return 0;
}
