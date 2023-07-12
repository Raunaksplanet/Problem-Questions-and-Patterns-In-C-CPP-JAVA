Q1.What will be the output of the following code.
#include <iostream>
using namespace std;


int main()
{
    int a = printf("Abhishek");
    cout << a;
}
""""""""""""""""""""""""""""""""""""""""""""""""
Ans1. Abhishek8 
--------------------------------------------------------------------------------------------------------------------------------------
Q2.if n = 45954 then print the mid value(Eg = 9) in a single line of code.
ans2. 
#include <iostream>
using namespace std;

int main()
{
    int a = 45954;
    cout << (a/100)%10;
}
--------------------------------------------------------------------------------------------------------------------------------------
Q3. Write a program to input a number (minimum 5 Digit) from user and print this pattern.
Eg n = 16241
Pattern 
* 
* * * * * * 
* * 
* * * * 
* 
ans3.
#include <iostream>
using namespace std;

int main()
{

    int n, len, r = 0, i, j, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while (n > 0)
    {
        r = r * 10 + (n % 10);
        n = n / 10;
    }

    temp = r;

    for (len = 0; r > 0; (len++), (r = r / 10));

    for (i = 0; i < len; i++)
    {
        r = temp % 10;
        for (j = 1; j <= r; j++)
        {
            cout << "* ";
        }
        temp = temp / 10;
        cout << "\n";
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q4. 
