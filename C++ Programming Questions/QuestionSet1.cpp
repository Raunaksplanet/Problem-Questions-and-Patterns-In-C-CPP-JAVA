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
// Or Alternatice Code

#include <iostream>
#include <string.h>
using namespace std;

int main()
{   
    int n, f;
    cout << "Enter Number: "; 
    cin >> n;
    char str[5];
    itoa(n,str,10);
    (f = strlen(str)/2, str[f] % 2 != 0)?cout << "Odd":cout << "Even";
}
--------------------------------------------------------------------------------------------------------------------------------------
Q5.Write a program to input the string from user if length of string is odd then print pattern like this.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Input:- Raunaks // length is 7
Output:- n
        una
       aunak
      raunaks
''''''''''''''''''''''''''''''''''''''''''''''''''''''''' 
Ans5. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    string str;
    cout << "Enter String: ";
    cin >> str;
    
    int a,b = str.length(), c = str.length() / 2+1;
    if(b % 2 != 0)
    {
        cout << setw(c) << str[c-1] << endl;
        a = c-1;
        for(int i = 1, j = 2; i <= c-1 ; i++, ++j)
        {
            cout  << setw(c+i) << str.substr(--a,++j) << endl;
        }
    }
    else
    {
        cout << "Size of string is not odd";
    }
}

// Or Alternative Code.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string str = "Raunak";
    int l, x = 0, y = 0;

    l = str.length();
    y = l / 2;

    for(int i = 0; i <= l/2; i++,x++,y--)
    {
        cout << setw(y+1) << " ";
        for(int j=y;j<=i+x+y;j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
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
Q10. Write a program to input money amount from user and break down it in Indian currency system, for Eg:- if amount = 2375, breakdown = 2000  100  100  100  50  20  5
ans10. 
#include<iostream>
using namespace std;

int main()
{
    int amount;
    int arr[9] = {2000,500, 100, 50, 20, 10, 5, 2, 1};
    cout << "Enter a amount: ";
    cin >> amount; 

    cout << "\nBrakdown will be\n";
    for (int i = 0; i < 9; i++)
    {
        while(amount>=arr[i])
        {
            cout << arr[i] << "  ";
            amount = amount - arr[i];
        } 
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q11. if string str = 12345 then print this pattern,
/* output:
54321
4321
321
21
1    */
ans11. 
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.substr(i, str.length()) << "\n";
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q12. Write a program to enter a 5 digit number from user and swap first & last digit in a number.
Example:- Input:-  12345
          Output:- 52341

ans12. 
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input: ";
    cin >> a;

    char str[5], c;
    itoa(a,str,10);
    
    c = str[0];
    str[0] = str[4];
    str[4] = c; 
    cout << "Output: " << str;
}

// Or Alternative Code.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Answer. " << (((((n%10)*10000)+(n%10000))/10)*10)+(n/10000);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q13.Write a program to input a string from user and if length of string is odd then print mid character of string.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Input: A = Raunaks // length is 7
Output: n
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans13.
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;
    int a;
    a = str.length() / 2;
    (a % 2 != 0)?a = str.length() / 2 && cout << str[a]:0;
}
--------------------------------------------------------------------------------------------------------------------------------------
Q14.Write a program to print square in loop example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
4 
16 (square of 4)   
256  (square of 16)
65536 (square of 256)
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans14.
#include <iostream>
using namespace std;
int main()
{
    // square
    double b, a = 2;
    for (int i = 1; i <= 4; i++)
    {
        b = a * a;
        a = b;
        cout << b << endl;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q15. Write a program to input a string from user & Reverse at its own place.
Ans15.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str, str2;
    cout << "Enter String: ";
    getline(cin,str);

    for (int i = 0,f=0; i <= str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            str2 = str.substr(f, i - f);
            f = i + 1;  
            reverse(str2.begin(), str2.end());
            cout << str2 << " ";
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q16. if arr[x] have x number of elements then find the value of x.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Example:- 
int arr[] = {1,2,3,4,5,6,7};
Output:- 7 Elements in arr[].
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans16.
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Number of elements: " << n;
}
--------------------------------------------------------------------------------------------------------------------------------------
Q17.Write a program to sorting then reversing and then finding maximum and smallest element in array.
Ans17.
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {123,56,35,67,52,236,57,7,235,43};

    sort(arr,arr+10);
    reverse(arr,arr+10);
    int *a = max_element(arr,arr+10);
    int *f = min_element(arr,arr+10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Maximum Element: " << *a << endl;
    cout << "Minimum Element: " << *f;
}
--------------------------------------------------------------------------------------------------------------------------------------
Q18.
