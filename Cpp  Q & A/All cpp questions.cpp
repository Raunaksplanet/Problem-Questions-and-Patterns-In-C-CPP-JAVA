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
Q5. 
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
Q6.  /*
    question4. Print this pattern
    1
     2
      3
       4
        5
         6
          7
           8 
            9 
             10
    In single loop.
    */
Ans5.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 1;
    while(i<=10)
    {
        cout << setw(i) << i << "\n";
        i++;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q7. 
    /*
    Print this pattern
    *    
    **   
    ***  
    **** 
    *****
    In single loop.
    */
Ans7.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout << setw(i+1) << setfill('*') << "\n";
    }
    //OR

    string s = "*";
    for(int i=1;i<=5;i++,(s =s + "*"))
    {
        cout << s << "\n";
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q8.write a program to input a number from user and first check if number is 3 Digit. if number is 3 digit number then check if
number is even or odd, if number if number is odd then print mid value if number is even then print first digit of number.
Challenge is You have to perform all these things in single line of code.
    
ans8.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, y;
    cout << "Enter a number: ";
    cin >> n;
    y = ((n >= 100 && n <= 999) ? (n % 2 == 0) ? ((n / 10) % 10) : ((n / 100) % 10) : 0);
    (y == 0) ? cout << "Wronng Input" : cout << y;
}   
--------------------------------------------------------------------------------------------------------------------------------------
Q9.// reverse a number.
    // Eg: n = 12345.
    //     n = 54321 
    
ans9.
int nn;
    cout << "Enter a number: ";
    cin >> nn;
    int t = nn, rev = 0; 

    while(nn>0)
    {
        rev = rev * 10 + (nn%10);
        nn = nn / 10;
    }

    cout << "Reverse of " << t << " is " << rev; 


    cout << "\n\n";
--------------------------------------------------------------------------------------------------------------------------------------
Q10.
