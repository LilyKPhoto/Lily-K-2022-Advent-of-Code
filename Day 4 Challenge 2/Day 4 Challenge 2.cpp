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
using namespace std;

int main() {
	ifstream inputFile;
	inputFile.open("input.txt");
	int nums[4] = { 0,0,0,0 }; // numbers a, b, c, d at indexes 0, 1, 2, 3 (respectively)
	int hasOverlap = 0;
	while (inputFile) {
		for (int i = 0; i < 4; i++) {
			inputFile >> nums[i];
			inputFile.ignore();
			//cout << nums[i] << "\n";
		}
		if ((nums[1] >= nums[2]) && (nums[0] <= nums[3])) {
			hasOverlap += 1;
		}
	}
	cout << hasOverlap << " assignment pairs overlap." << "\n";
	inputFile.close();
	return 0;
}