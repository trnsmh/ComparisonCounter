//Semih Turan 
//This program counts the basic operation number for given size of array.
#include <iostream>
#include <ctime>

using namespace std;

void sort(int A[], int n, int &cntr) {

	int i, j;
	
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {

			cntr++;
			if (A[j] < A[i]) {
				swap(A[i], A[j]);

			}
		}
	}
}

int main() {
	int size,counter=0;
	cout << "Enter the size of array: ";
	cin >> size;
	int *array = new int[size];
	srand(time(NULL));
	cout << "NOT sorted array:" << endl;
	for (int k = 0; k < size; k++) {
		array[k] = rand() % size + 1;
		cout << array[k] << " ";
	}
	cout << endl;
	sort(array, size, counter);
	cout << "Sorted Array" << endl;
	for (int k = 0; k < size; k++) {
		cout << array[k] << " ";
	}
	cout << endl;
	cout << "Number of basic operations to sort the array is:" << counter << endl;
	cout << endl;
	delete[]array;

	return 0;
}