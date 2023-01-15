Q1.Write a program to print hello world x time given by user.
Ans1.
#include <iostream>
using namespace std;

int main()
{
    int i,j;
    cout << "Enter how many times you want to run loop: ";
    cin >> j; 

    for(i=1;i<=j;i++)
    {
        cout << i;
        cout << " Hello world" <<endl;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q2.Write a program to Count the digits entered by user.
ans2. 
#include <iostream>
using namespace std;

int main()
{
    int b, a = 1;
    cin >> b;
    int temp = b;
    while (temp /= 10)
    {
        a++;
    }
    cout << "The a " << b << " has " << a << " digit(s)" << endl;
}
--------------------------------------------------------------------------------------------------------------------------------------
q3.Executing both if and else statement simultaneously
ans3. 
#include<stdio.h>

int main()
{
    if(1)
    {
        a: printf("hello ");
        goto b; 
    } 
    else
    {
    goto a;
    b: printf("World");
    }
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------
q4. Find sum of first n natural numbers
ans4.
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b;
    cout << "Enter output limit: ";
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        a = a + i;
    }
    cout << a;
}    
--------------------------------------------------------------------------------------------------------------------------------------
q5. Find sum of first n natural numbers
ans5.
    
