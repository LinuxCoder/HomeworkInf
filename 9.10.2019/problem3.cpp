#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

bool is_prime(int a) {
	for (int i = 2; i <= (int)sqrt(a); i++)
		if (a % i == 0)
			return false;
	return true;
}

int main() {
	int n;
	cin >> n;
	int data[n];

	int counter = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (is_prime(a))
			data[counter++] = a;
	}
	if (counter == 0)
		cout << 0;
	else 
		for (int i = counter - 1; i >= 0; i--)
			cout << data[i] << " ";
	return 0;
}