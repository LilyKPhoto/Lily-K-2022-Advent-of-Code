#include <iostream>
using namespace std;
int main() {
	const char lowercase[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	const char uppercase[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char stopRunning = 0, tempChar = 0;
	int priority = 0;
	while (stopRunning != toupper('y')) {
		cout << "Enter a letter: ";
		cin >> tempChar;
		for (int i = 0; i < 26; i++) {
			if (tempChar == lowercase[i]) {
				priority = i + 1;
				cout << "Priority of letter \"" << tempChar << "\" is: " << priority << "\n";
			}
			else if (tempChar == uppercase[i]) {
				priority = i + 26 + 1;
				cout << "Priority of letter \"" << tempChar << "\" is: " << priority << "\n";
			}
		}
	}
	return 0;
}