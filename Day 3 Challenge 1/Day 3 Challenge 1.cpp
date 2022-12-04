// a-z (lowercase) = 1 - 26
// A-Z (uppercase) = 27 - 52
// "cout is ambiguous" can fucking suck me off
// anyways
//

#include <iostream>
#include <fstream> // needed to read from the input file

using namespace std;

int main() {
	const int SIZE = 100; // maximum array size
	const char lowercase[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	const char uppercase[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' }; 

	ifstream inputFile; // allows reading from a file
	inputFile.open("input.txt"); // opens the file

	char cArray[SIZE], firstHalf[SIZE], secondHalf[SIZE]; // c-strings

	for (int i = 0; i < SIZE; i++) {
		// this loop initializes all arrays to null character
		cArray[i] = '\0';
		firstHalf[i] = '\0';
		secondHalf[i] = '\0';
	}
	int totalPriority = 0; // will keep a running total of the priority

	// file processing begins here:
	while (inputFile.getline(cArray, SIZE, '\n')) {
		int length = strlen(cArray); // gets the length of the c-string cArray (in this case, characters that aren't the null character)
		
		// initializing the array for the first half of characters:
		for (int i = 0; i < length / 2; i++) 
			firstHalf[i] = cArray[i];
		
		// initializing the array for the second half of characters: 
		for (int j = 0; j < length / 2; j++) {
			int h = j + (length / 2);  // h is for the index of cArray 
			secondHalf[j] = cArray[h]; // initializes the secondHalf array with the chars in the second half of cArray
		}

		char tempChar = 0; // stores the letter to be compared to
		bool stopRunning = false; // stops the loop
		int b = 0;
		while (stopRunning == false) {
			for (int a = 0; a < length / 2; a++) {
				if (firstHalf[a] == secondHalf[b]) {
					tempChar = firstHalf[a]; // match found!
					stopRunning = true;
				}
			}
			b++; // increments the b variable
		}
		int priority = 0; // priority of the item, comes from the letter
		for (int i = 0; i < 26; i++) {
			if (tempChar == lowercase[i]) {
				priority = i + 1;
				totalPriority += priority; // runs the running priority total
			}
			else if (tempChar == uppercase[i]) {
				priority = i + 26 + 1;
				totalPriority += priority; // runs the running priority total
			}
		}
	}
	cout << "Total Priority = " << totalPriority << ".\n";
	return 0;
}
