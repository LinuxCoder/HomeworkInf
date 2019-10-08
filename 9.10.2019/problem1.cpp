#include <iostream>
#include "merge_sort.hpp"

using std::cout;
using std::cin;

int main() {
	int n;
	cout << "Input n:";
	cin >> n;
	int *data = new int[n];
	cout << "Input elements: ";
	for (int i = 0; i < n; i++) 
		cin >> data[i];
	cout << "Processing data...\n";
	merge_sort(data, n);
	cout << "Done!\n";
	cout << "Input i: ";
	int i;
	cin >> i;
	cout << data[i - 1] << '\n';
	return 0;
}