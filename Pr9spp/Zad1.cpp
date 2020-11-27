using namespace std;
#include <iostream>

int metod(string str, char letter) {
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == letter) {
			count++;
		}
	}
	return count;
}

int main()
{	
	cout << "Enter string: " << endl;
	string str = "";
	cin >> str;
	cout << "Enter letter: " << endl;
	char letter = '0';
	cin >> letter;
	int num = metod(str, letter);
	cout << "The number of characters is equal to: " << num;
}


