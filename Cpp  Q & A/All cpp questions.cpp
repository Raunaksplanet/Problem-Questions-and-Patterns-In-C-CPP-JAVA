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
q5. Write a program to input in a array by user and of size n from evey i to n display max
********************************************************************************************
Example: n = 6 , arr[6] = 0 -9 1 3 -4 5 
output = 0 0 1 3 3 5     
********************************************************************************************
ans5.
    #include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,mx=0,i;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array element: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    } 

    for(i=0;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout << mx << "  ";
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q6. Same as q5 but now find max of sub array of array
ans6.    
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,mx=0,i,j;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array element: ";
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    } 

    for(i=0;i<n;i++)
    {
        mx = 0;
        for(j=i;j<n;j++)
        {
            mx = mx + arr[j];
            cout << mx << "  ";
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q7. Write a program to input in array size of n and output all sub-array.
ans7. 
    
#include<iostream>
using namespace std;

int main()
{
   int i,j,n;
   cout << "Enter array size: ";
   cin >> n;

   int arr[n];

   cout << "Enter array elemnet-- ";
   for(i=0;i<n;i++)
   {
      cin >> arr[i];
   }
   
   for(i=0;i<n;i++)
   {
      for(j=i;j<n;j++)
      {
         cout << arr[j] << "  ";
      }
      cout << endl;
   }
}
--------------------------------------------------------------------------------------------------------------------------------------
q8. Write a program to input in array size of n and output all sub-array.
ans8.
