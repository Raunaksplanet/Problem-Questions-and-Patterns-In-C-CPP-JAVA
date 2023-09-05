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
Q25. Write a program to input a string from user and break string into next line after every space.
"""""""""""""""""""""""""""""""""""""""""
Input = Tree With Apples
Output = Tree
         With
         Apples
"""""""""""""""""""""""""""""""""""""""""
ans25.
#include <iostream>
using namespace std;

int main()
{
  string str, str2;
  cout << "Enter String: ";
  getline(cin,str);
  
  int n = str.length();
  for (int i = 0, f = 0; i <= n; i++)
  {
    if (str[i] == ' ' || str[i] == '\0')
    {
      str2 = str.substr(f, i - f);
      f = i + 1;
      cout << str2 << endl;
    }
  }
}
------------------------------------------------------------------------------------------------------------------------------------
Q26.Write a program to input words in string array from user and find closest distance between two words.
"""""""""""""""""""""""""""""""""""""""""
Input = raunak gupta is a good boy
word1 = gupta, word2 = boy 
Output = 3
"""""""""""""""""""""""""""""""""""""""""
ans26.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string str[] = {"raunak", "gupta", "is", "good", "boy"};
  string str2 = "gupta", str3 = "boy";
  int m = 0, n = sizeof(str) / sizeof(str[0]);
  
  for(int i = 0; i < n; i++)
  {
    if(str[i] == str2)
    {
      m = i;
    }
    if(str[i] == str3)
    {
      cout << i-m;
      break;
    }
  }
}
------------------------------------------------------------------------------------------------------------------------------------
Q27. Write a program to input multiple ascaii values from user in a string and convert into chracters
"""""""""""""""""""""""""""""""""""""""""
Input = 82 97 117 110 97 107 32 71 117 112 116 97
Output = Raunak Gupta
"""""""""""""""""""""""""""""""""""""""""
ans27.
#include <iostream>
using namespace std;

int main()
{
  string str = "82 97 117 110 97 107 32 71 117 112 116 97", str2;
  int e;
  for(int i = 0,f = 0; i <= str.length(); i++)
  {
    if(str[i] == ' ' || str[i] == '\0')
    {
      str2 = str.substr(f,i-f);
      f = i + 1;
      e = stoi(str2);
      printf("%c", e);
    }
  } 
}
------------------------------------------------------------------------------------------------------------------------------------
Q28. Write a program to
