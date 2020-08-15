/* This code is the implementation for the binary search algorithm

Problem Statement: Given a sorted array and an element, find whether the element exists in the array or not. If yes, return it's position.

Key Idea: i) If the element is equal to the number at the middle of array ; return mid
		 ii) If the element is less than the number at the middle of array ; search in the left half of array
		iii) Else search in the right half of the array

Time Complexity: O(logn)

Space Complexity: O(1)

*/

#include <iostream>
using namespace std;

int Binary_Search(int* A, int start, int end, int element) {

	while (start <= end) {
		int mid = (start + end) / 2;
		if (element == A[mid])
			return mid;
		else if (element < A[mid]) {
			end = mid - 1; // Search in the left half of the array.
		}
		else {
			start = mid + 1; // Search in the right half of the array.
		}
	}
	return -1; // Element is not present in the array.
}

int main() {
	int N, element, pos;

	cout << "\n Enter the size of the array: ";
	cin >> N;

	int* A = new int[N];

	cout << "\n Enter the array: ";
	for (int i = 0; i < N; i++)
		cin >> A[i];

	cout << "\n Enter the element to be searched: " << "\t";
	cin >> element;

	pos = Binary_Search(A, 0, N - 1, element);

	if (pos != -1)
		std::cout << "\n The element is at index: " << "\t" << pos;
	else
		std::cout << "\n The element is not present in the array";

	delete(A);

	return 0;
}