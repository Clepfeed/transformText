#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("CLS");

    string str;
    string newStr = "";
    char lit;
    int amountOfLit = 0;
    int litFind = 0;

    getline(cin, str);

    while (str.length())
    {
        lit = str[0];
        for (int i = 0; i < str.length(); i++)
        {
            if (lit == str[i])
            {
                amountOfLit++;
            }
        }
        newStr += lit + to_string(amountOfLit);
        amountOfLit = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (lit == str[i])
            {
                str = str.substr(0, i) + str.substr(i + 1);
                i--;
            }
        }
        litFind++;
    }
    cout << newStr;


    return 0;
}