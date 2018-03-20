#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inn;

void whichPad(int x);
int charCalc(char x);

int main() {
	char stay;
	int padNum;
	string option, eMessage;
	
	cout << "Select a pad to load by entering the the pad's number" << endl << "Pad 1" << endl;
	cin >> padNum;

	whichPad(padNum);
	if (inn.fail()) {
		cout << "file can not be opened" << endl;
		exit(1);
	}

	cout << "Enter the message you want to encrypt: ";
	cin.ignore();
	getline(cin, eMessage);

	for (int x = 0; x < eMessage.length(); x++) {
		
		cout << eMessage[x];
	}

	
	cin >> stay;
	return 0;
}

void whichPad(int x) {
	if (x == 1) {
		inn.open("pad1.txt");
	}
	else if (x == 2) {
		inn.open("pad2.txt");
	}
	else {
		cout << "Please enter a valid pad number" << endl;
	}


}

int charCalc(char x) {
	int charVal = 0;
	if (x == 'a') {
		charVal = 1;
	}
	return charVal;
}
