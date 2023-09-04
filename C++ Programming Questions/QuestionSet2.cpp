Q21.Write a program to print file name of .cpp file using macro.
ans21.
#include <iostream>
using namespace std;

int main()
{
    cout << __FILE__;
}
--------------------------------------------------------------------------------------------------------------------------------------
Q22.Write a program to print source code in output.
ans22.
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream sourceFile(__FILE__);

    string line;
    while (getline(sourceFile, line)) {
        cout << line << endl;
    }
}
------------------------------------------------------------------------------------------------------------------------------------
Q23.Write a Program To Find Initials of a string.
"""""""""""""""""""""""""""""""""""""""""
Input = Tree With Apples
Output = T W A
"""""""""""""""""""""""""""""""""""""""""
ans23.
#include<iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin,str);

    int f = str.length();
    cout << str[0] << " ";

    for(int i = 0 ; i < f; i++)
    {
        if(str[i] == ' ')
        {
            if(str[i+1] == ' ')
            {
                 continue;
            }
            cout << str[i+1] << " ";
        }
    }
}
------------------------------------------------------------------------------------------------------------------------------------
Q24. 
