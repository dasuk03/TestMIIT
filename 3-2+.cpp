#include <iostream>
using namespace std;

int main(){
	float N[1000], x;
	cout << "Vvod chisel (poka est' chisla): "; //Esli vvesti ne chislo to perestanet
	for (int i = 0; i < 1000; i++){
		cin >> N[i];
		if (!N[i]) {
			cout << " err eto ne chislo!" << endl;
			for (int y = 1; y <= i; y++){
				if (N[y-1] < N[y]) {
					x += 1;
					
				}
			}
			cout << "Chisel bolshe: " << x << endl;
			return 0;
		}
	}
}
