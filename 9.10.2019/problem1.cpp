#include <iostream>
#include "merge_sort.hpp"

using std::cout;
using std::cin;

int main() {
	int n;
	cin >> n;
	int *data = new int[n];
	for (int i = 0; i < n; i++) 
		cin >> data[i];
	merge_sort(data, n);
	int i;
	cin >> i;
	cout << data[i] << '\n';
	return 0;
}