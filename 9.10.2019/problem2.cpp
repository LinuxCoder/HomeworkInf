#include <iostream>

using std::cout;
using std::cin;

int main() {
	int n;
	int counter = 0;
	cin >> n;
	int* data = new int[n];
	for (int i = 0; i < n; i++)
		cin >> data[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j ++) {
			if ((data[i] + data[j]) % 7 == 0)
				counter++;
		}
	}
	cout << counter << '\n';
	return 0;
}