#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	double sum = 0.0;
	for (int i = 0; i < 12; ++i) {
		double temp;
		cin >> temp;
		sum += temp;
	}
	cout << "$" << fixed << setprecision(2) << sum / 12.0 << endl;
	return 0;
}