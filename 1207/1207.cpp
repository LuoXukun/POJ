#include<iostream>

using namespace std;

int getCycleLength(int num) {
	int count = 0;
	while (num != 1) {
		if (num % 2)
			num = 3 * num + 1;
		else
			num = num / 2;
		count++;
	}
	count++;
	return count;
}
int main() {
	int i, j;
	while (cin >> i >> j) {
		int x = i < j ? i : j;
		int y = i < j ? j : i;
		int maxLength = 0;
		for (int m = x; m <= y; m++) {
			int temp = getCycleLength(m);
			if (maxLength < temp)
				maxLength = temp;
		}
		cout << i << " " << j << " " << maxLength << endl;
	}
}