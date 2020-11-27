#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    char* mass_leter = new char [] 
    {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'
    };
    cout << "Enter string" << endl;
    string str = "";
    cin >> str;
    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < 26; j++) {
            if (str[i] == mass_leter[j]) {
                num++;
            }
        }
    }
    cout << num;
}
