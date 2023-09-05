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
Q24. Write a program to input a string S consisting of lowercase Latin Letters, the task is to find the *first* non-repeating character in S.
ans24.
#include <iostream>
using namespace std;

int main()
{
  string str = "geeksforgeeks";
  int i, j, m = 0;
  char c;
  for (i = 0; i < str.length(); i++)
  {
    c = str[i];
    for (j = i + 1, m = 0; j < str.length(); j++)
    {
      (str[j] == c) ? m++ : m;
    }
    if (m == 0)
    {
      break;
    }
  }
  cout << c;
}
------------------------------------------------------------------------------------------------------------------------------------
Q25.
