#include <iostream>
using namespace std;



int binarySearch(int dzar, int n) {
	int lowerbound = 0;
	int upperbound = n - 1;

	while (lowerbound <= upperbound) {
		int mid = (lowerbound + upperbound) / 2;

		if (dzar[mid] == n) {
			return mid;
		}
		else if (n < dzar[mid]) {
			upperbound = mid - 1;
		}
		else {
			lowerbound = mid + 1
		}
	}


}

int main() {
	int n;
	cout << "Enter number of elements in the array: ";
	cin >> n;

	int dzar[n];
	cout << "Enter elements of the array in sorted order: ";
	for (int i = 0;i < n;i++) {
		cin >> dzar[i];

	}
}


