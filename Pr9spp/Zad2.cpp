#include <iostream>
using namespace std;

int main()
{
	cout << "Enter string" << endl;
	string str = "";
	cin >> str;
	cout << "Enter letter" << endl;
	
	string letter;
	cin >> letter;
	int rez = str.find(letter);
	str.replace(rez, 1, "0");
	cout << str;
} 