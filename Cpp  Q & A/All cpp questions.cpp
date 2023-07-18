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
Q4. Write a program to input a number from user and find that mid digit of that number is Even or not.
ans4.
#include<iostream>
using namespace std;

int main()
{
    int a, len, r = 0, tmp;
    char str[10];
    cout << "Enter a number: ";
    cin >> a;

    itoa(a,str,10);
    r = a;
    for (len = 0; r > 0; (len++), (r = r / 10));
    
    tmp = len/2;

    (str[tmp] %2 == 0)?cout << "Even Number" : cout << "Not Even";

}
--------------------------------------------------------------------------------------------------------------------------------------
Q5. first input a number from user and check if number is more and less then 3 digit print Error then check if number is even or odd.
    If number is even then print first digit of the numebr &  if the number is odd then print mid digit of number using only single 
    one line of code (EG: teranry operator)
Ans5. 
#include<iostream>
using namespace std;

int main()
{
 
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int x = ((n>=100 && n<=999)?(n%2==0)?((n/10)%10):((n/100)%10):0);

    (x==0)?cout << "Wrong Input": cout << x;
 
}
--------------------------------------------------------------------------------------------------------------------------------------
Q6.
    
