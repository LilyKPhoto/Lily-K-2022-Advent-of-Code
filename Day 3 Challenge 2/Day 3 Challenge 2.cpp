// a-z (lowercase) = 1 - 26
// A-Z (uppercase) = 27 - 52
//

#include <iostream>
#include <fstream> // needed to read from the input file

using namespace std;

char getThreeLines(); // function prototype

ifstream inputFile; // allows reading from a file

const int SIZE = 100; // maximum array size
char firstLine[SIZE], secondLine[SIZE], thirdLine[SIZE]; // defined out of main() so they can be used elsewhere

int main() {
	inputFile.open("input.txt");
	const char lowercase[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	const char uppercase[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };	

	for (int i = 0; i < SIZE; i++) {
		// this loop initializes all arrays to null character
		firstLine[i] = '\0';
		secondLine[i] = '\0';
		thirdLine[i] = '\0';
	}
	int priority = 0; // will store priority for the matching letter
	int totalPriority = 0; // will keep a running total of the priority
	
	// main while loop begins here: 
	while (inputFile) {
		char matchingChar = getThreeLines(); // gets the matching character from a group of 3 lines.
		// cout << "matchingChar = " << matchingChar << "\n";
		for (int i = 0; i < 26; i++) {
			if (matchingChar == lowercase[i]) {
				priority = i + 1; // sets priority starting at 1 and going up to 26
				totalPriority += priority; // runs the running priority total
			}
			else if (matchingChar == uppercase[i]) {
				priority = i + 26 + 1; // sets priority starting at 27 and going to 52
				totalPriority += priority; // runs the running priority total
			}
		}
	}
	cout << "Total Priority: " << totalPriority << "\n";
	return 0;
}

/*===================================================================
	This function reads a group of three lines and compares them.
	The function compares all three lines and finds the shared 
	character between them.
===================================================================*/
char getThreeLines() {
	inputFile.getline(firstLine, SIZE, '\n');  // reads the first line
	inputFile.getline(secondLine, SIZE, '\n'); // reads the second line
	inputFile.getline(thirdLine, SIZE, '\n');  // reads the third line
	int firstLength = strlen(firstLine);   // gets length of the first line
	int secondLength = strlen(secondLine); // gets length of the second line
	int thirdLength = strlen(thirdLine);   // gets length of the third line
	char match = 0;
	for (int first = 0; first < firstLength; first++) {
		for (int second = 0; second < secondLength; second++) {
			for (int third = 0; third < thirdLength; third++) {
				if ((firstLine[first] == secondLine[second]) && (secondLine[second] == thirdLine[third]))
					match = firstLine[first];
			}
		}
	}
	return match;
}