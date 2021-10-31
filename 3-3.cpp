#include <iostream>
#include <cmath>
using namespace std;

double f(float x, int n){
	int res = 1; double j, k;
	for (int u = 1; u <= n; u++) {
		res = res * u;
	}
	
	j = pow(x,n);
	k = (j/res);
	return k;
}

double estepeni(float x){
	const double e = 2.718281828459045;
	return (pow(e,x));
}

int main(){
	int const a = 1; int const b = 2; float const h = 0.1;
    double const E = pow(15,(-4)); // `= 0.0000197531
	float x = a; double last = -33, now = 20, sum = 0, znE; int n = 1;
	
	cout << "  x  " << "    S  " << "    Y  " << endl;
	
	for (x = a; x <= b; x += h){
		
		n = 1;
		last = f(x,n);
		now = f(x,n+1);
		sum = last + now + 1;
		while (abs(now - last) > E) {
			n++;
			last = now; 
			now = f(x,n+1);
			sum += now;
		}
		
		cout << x << "   " << sum << "   " << estepeni(x) << endl;
	}
	
}
