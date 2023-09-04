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

// OR Alternative Code

#include<stdio.h>

int main()
{
    char c;
    FILE *fp = fopen(_FILE_, "r");
  
    do
    {
        c = fgetc(fp);
        putchar(c);
    }
    while (c != EOF);
}
------------------------------------------------------------------------------------------------------------------------------------
Q23.
