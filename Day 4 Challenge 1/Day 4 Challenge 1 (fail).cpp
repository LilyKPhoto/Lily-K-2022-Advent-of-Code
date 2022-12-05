// Input will contain two pairs of numbers a-b,c-d
// Example: 2-8 and 3-7
// These have complete overlap, and crucially, 3-7 is FULLY CONTAINED in 2-8.
// One pair of numbers will be fully contained in the other if the following is true:
// if c >= a AND d <= b
// OR the following is true:
// if a >= c AND b <= d
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ifstream inputFile;
	inputFile.open("simpleinput.txt");
	
	const int maxSize = 12;
	char input[maxSize]; // array
	vector<int> numbers; // vector
	numbers.clear(); // clears vector

	for (int i = 0; i < maxSize; i++) {
		input[i] = '\0';
	}

	inputFile.getline(input, maxSize, '\n'); // gets line of file

	int length = strlen(input); // finds the length of the string
	cout << "C-String Length = " << length << "\n";
	for (int i = 0; i < length; i++) {
		numbers.push_back(input[i] - 48); // initializes vector
		cout << "input[" << i << "] = " << input[i] << "\n";
	}
	length = numbers.size();
	cout << "Vector length = " << length << "\n";
	for (int i = 0; i < length; i++) {
		cout << "numbers[" << i << "] = " << numbers[i] << "\n";
	}
	for (int i = 0; i < length; i++) {
		if (numbers.at(i) < 0) {
			vector<int>::iterator removalPoint = numbers.begin() + i;
			cout << "removalPoint = " << *removalPoint << "\n";
			numbers.erase(removalPoint);
			length -= 1;
		}
	}
	cout << "length = " << length << "\n";

	for (int i = 0; i < length; i++) {
		cout << "numbers[" << i << "] = " << numbers[i] << "\n";
	}

	return 0;
}
