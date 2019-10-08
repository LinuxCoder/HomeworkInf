#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

bool is_prime(int a) {
	for (int i = 2; i < (int)sqrt(a); i++)
		if (a % i == 0)
			return false;
	return true;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (is_prime(a))
			cout << "YES";
		else 
			cout << "NO";
		cout << endl;
	}
	return 0;
}