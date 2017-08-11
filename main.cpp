#include <iostream>
#include <array>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

//const int K_SIZE = 10;

double average(int intArray[], int size) {
	double avg;
	int sum = 0;
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < size; i++) {
		sum += intArray[i];
	}
	avg = double(sum) / size;

	for (int i = 0; i < size; i++) {
		if (avg < intArray[i]) {
			cout << "\n";
			cout << intArray[i] << " " << "is greater than avg " << avg << endl;
		}
		if (avg > intArray[i]) {
			cout << "\n";
			cout << intArray[i] << " " << "is less than avg " << avg << endl;
		}
		if (avg == intArray[i]) {
			cout << "\n";
			cout << intArray[i] << " " << "is equal to avg " << avg << endl;
		}
	}

	return avg;

}

void swap_smallest(int intArray[], int size) {
	int min = size;
	int index;
	for (int i = 0; i < size; i++) {
		if (min > intArray[i]) {
			min = intArray[i];
			index = i;
		}
	}
	cout << "The smallest element in array is " << min << endl;
	cout << "It is found at index " << index << endl;

	int temp = intArray[0];
	intArray[0] = intArray[index];
	intArray[index] = temp;
	cout << "\nAfter swapping first element with smallest value: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "Index " << i << ": " << intArray[i] << endl;
	}

}

int find(int valueToSearchFor, int intArray[], int numberOfValidEnties) {
	int index_count = 0;

	while (index_count < numberOfValidEnties) {
		if (intArray[index_count] == valueToSearchFor) {
			return index_count;
		}
		else
			index_count++;

	}
	return -1;
}

int main() {
	int index_count;
	int index, value, temp;

	cout << "How many values would you like to input? ";
	int arrayvalue;
	cin >> arrayvalue;
	int intArray[10];

	//cout << "Type in your numbers, up to a maximum of 10 values. Enter -1 to stop." << endl;
	for (index_count = 0; index_count < arrayvalue; index_count++) {
		cout << "Enter index " << index_count << ": ";
		cin >> temp;
		if (temp == -1) break;
		else intArray[index_count] = temp;
	}

	cout << "\n\nYour numbers are ";
	for (int i = 0; i < arrayvalue; i++) { //dont use Ksize
		cout << intArray[i] << " ";
	}


	cout << "\n\nPlease enter number of valid entries: ";
	int validEntries;
	cin >> validEntries;
	cout << "\nPlease enter number to search for in array: ";
	int numberSearch;
	cin >> numberSearch;

	int index_found = find(numberSearch, intArray, validEntries);
	cout << "Value was found at index: " << index_found << endl;

	double avg;
	cout << "\n\nPlease enter size of array: ";
	int size;
	cin >> size;
	avg = average(intArray, size);

	swap_smallest(intArray, size);


	system("PAUSE");
	return 0;
}
