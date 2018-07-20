/* 大概是变种的调和数列，给出和求项数 */
#include<iostream>

using namespace std;

int getCount(double sum) {
	int _count = 1;
	double _sum = 0.0;
	while (true) {
		_sum += 1.0 / (_count + 1);
		if (_sum >= sum) break;
		_count++;
	}
	return _count;
}

int main() {
	double sum = 0.0;
	int count;
	while (true) {
		cin >> sum;
		if (sum < 0.01 || sum > 5.20) break;
		count = getCount(sum);
		cout << count << " card(s)" << endl;
	}
	return 0;
}