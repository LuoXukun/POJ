#include<iostream>
#include<math.h>

using namespace std;

int getYear(double square) {
	int year = 0;
	double _square = 0.0;
	while (true) {
		year++;
		_square += 50.0;
		if (_square >= square)
			break;
	}
	return year;
}

int main() {
	int count;
	cin >> count;
	for (int i = 1; i <= count; i++) {
		double x, y;
		double square;
		int year;
		cin >> x >> y;
		square = 3.14 * (pow(x, 2) + pow(y, 2)) / 2;
		year = getYear(square);
		cout << "Property " << i << ": This property will begin eroding in year " << year << "." << endl;
	}
	cout << "END OF OUTPUT." << endl;
}