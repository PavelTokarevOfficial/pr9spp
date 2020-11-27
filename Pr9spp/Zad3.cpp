using namespace std;
#include <iostream>
#include <cstdio>

int main() {
    setlocale(LC_ALL, "russian");
    cout << "Enter string: " << endl;
    string str = "", newstr = "";
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            newstr += str[i];
        }
    }
    str = newstr;
    cout << str << endl;
}