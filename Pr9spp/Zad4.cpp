using namespace std;
#include <iostream>

int main()
{
    setlocale(NULL, "rus");
    char* mass_leter = new char [] {'a', 'o', 'e', 'u', 'i', 'y',
                                        'A', 'O', 'E', 'U', 'I', 'Y'};
    cout << "Enter string" << endl;
    string str = "";
    cin >> str;
    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < 20; j++) {
            if (str[i] == mass_leter[j]) {
                num++;
            }
        }
    }
    cout << num;
}