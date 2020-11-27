#include <iostream>
using namespace std;

int main()
{
    string S = "", S0 = "";
    cout << "Enter first string" << endl;
    cin >> S;
    cout << "Enter second string" << endl;
    cin >> S0;
    int num = 0;
    for (int i = 0; i < S.length(); i++) {
        string str = S.substr(i);
        if (str.find(S0, i) < INT_MAX) {
            i = str.find(S0, i);
            num++;
        }
    }
    cout << num;
}
