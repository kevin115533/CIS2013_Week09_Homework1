#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inn;

void whichPad(int x);
int charCalc(char x);
char intCalc(int x);

int main() {
	char question;
	char padChar;
	char option;
	int padNum=0;
	int added=0;
	bool again = true;
	string eMessage;
	
	while (again == true) {
	cout << "Select a pad to load by entering the the pad's number" << endl << "Pad 1" << endl << "Pad 2" << endl;
	cin >> padNum;

	whichPad(padNum);
	if (inn.fail()) {
		cout << "File can not be opened" << endl;
		exit(1);
	}

		cout << "Do you want 1-Encrypt or 2-Decrypt? Enter the option number: ";
		cin >> option;

		if (option == '1') {
			cout << "Enter the message you want to encrypt: ";
			cin.ignore();
			getline(cin, eMessage);

			for (int x = 0; x < eMessage.length(); x++) {
				inn >> padChar;
				added = ((charCalc(eMessage[x]) + charCalc(padChar)) % 27);
				cout << intCalc(added) << " ";

			}
		cout << " is the encrypted message." << endl;
		
		}

		else if (option == '2') {
			cout << "Enter the message you want to decrypt: ";
			cin.ignore();
			getline(cin, eMessage);

			for (int x = 0; x < eMessage.length(); x++) {
				inn >> padChar;
				added = (((charCalc(eMessage[x]) + 27) - charCalc(padChar)) % 27);
				cout << intCalc(added);
			}
			cout << " is the decrypted message" << endl;
		}
		
		inn.close();
		cout << "Would you like to work on another message? y/n" << endl;
		cin >> question;
		if (question == 'y' || question == 'Y') {
			again = true;
		}
		else { again = false; }
	}
	
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
		if (x == 'a' || x == 'A') {
			charVal = 1;

		}
		else if (x == 'b' || x == 'B') {
			charVal = 2;

		}
		else if (x == 'c' || x == 'C') {
			charVal = 3;

		}
		else if (x == 'd' || x == 'D') {
			charVal = 4;

		}
		else if (x == 'e' || x == 'E') {
			charVal = 5;

		}
		else if (x == 'f' || x == 'F') {
			charVal = 6;

		}
		else if (x == 'g' || x == 'G') {
			charVal = 7;

		}
		else if (x == 'h' || x == 'H') {
			charVal = 8;

		}
		else if (x == 'i' || x == 'I') {
			charVal = 9;

		}
		else if (x == 'j' || x == 'J') {
			charVal = 10;

		}
		else if (x == 'k' || x == 'K') {
			charVal = 11;

		}
		else if (x == 'l' || x == 'L') {
			charVal = 12;

		}
		else if (x == 'm' || x == 'M') {
			charVal = 13;

		}
		else if (x == 'n' || x == 'N') {
			charVal = 14;

		}
		else if (x == 'o' || x == 'O') {
			charVal = 15;

		}
		else if (x == 'p' || x == 'P') {
			charVal = 16;

		}
		else if (x == 'q' || x == 'Q') {
			charVal = 17;

		}
		else if (x == 'r' || x == 'R') {
			charVal = 18;

		}
		else if (x == 's' || x == 'S') {
			charVal = 19;

		}
		else if (x == 't' || x == 'T') {
			charVal = 20;

		}
		else if (x == 'u' || x == 'U') {
			charVal = 21;

		}
		else if (x == 'v' || x == 'V') {
			charVal = 22;

		}
		else if (x == 'w' || x == 'W') {
			charVal = 23;

		}
		else if (x == 'x' || x == 'X') {
			charVal = 24;

		}
		else if (x == 'y' || x == 'Y') {
			charVal = 25;

		}
		else if (x == 'z' || x == 'Z') {
			charVal = 26;

		}
		else if (x == ' ') {
			charVal = 27;

		}
		else {
			charVal = 0;
		}
		return charVal;
	}

char intCalc(int x) {
	char eChar ='a';
	if (x == 1) {
		eChar = 'a';
	}
	else if (x == 2) {
		eChar = 'b';
	}
	else if (x == 3) {
		eChar = 'c';
	}
	else if (x == 4) {
		eChar = 'd';
	}
	else if (x == 5) {
		eChar = 'e';
	}
	else if (x == 6) {
		eChar = 'f';
	}
	else if (x == 7) {
		eChar = 'g';
	}
	else if (x == 8) {
		eChar = 'h';
	}
	else if (x == 9) {
		eChar = 'i';
	}
	else if (x == 10) {
		eChar = 'j';
	}
	else if (x == 11) {
		eChar = 'k';
	}
	else if (x == 12) {
		eChar = 'l';
	}
	else if (x == 13) {
		eChar = 'm';
	}
	else if (x == 14) {
		eChar = 'n';
	}
	else if (x == 15) {
		eChar = 'o';
	}
	else if (x == 16) {
		eChar = 'p';
	}
	else if (x == 17) {
		eChar = 'q';
	}
	else if (x == 18) {
		eChar = 'r';
	}
	else if (x == 19) {
		eChar = 's';
	}
	else if (x == 20) {
		eChar = 't';
	}
	else if (x == 21) {
		eChar = 'u';
	}
	else if (x == 22) {
		eChar = 'v';
	}
	else if (x == 23) {
		eChar = 'w';
	}
	else if (x == 24) {
		eChar = 'x';
	}
	else if (x == 25) {
		eChar = 'y';
	}
	else if (x == 26) {
		eChar = 'z';
	}
	else if (x == 27 || x==0) {
		eChar = ' ';
	}
	return eChar;
}
