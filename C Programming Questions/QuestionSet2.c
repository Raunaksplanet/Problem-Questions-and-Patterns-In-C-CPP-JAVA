Q21.write a program to Find 1st largest number in array
ans21.
#include <stdio.h>
int main()
{
    int arr[10], m1, i;

    for(i=0;i<10;i++)
    {
        printf("Index No %d: ",i);
        scanf("%d",&arr[i]);
    }
    m1 = 0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > m1)
        {
            m1 = arr[i];
        }
    }

    printf("Maxium element: %d", m1);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q22.write a program to Find 2nd largest numbers in array
ans22.
#include <stdio.h>
int main()
{
    int arr[10], m1, m2, i;

    for (i = 0; i < 10; i++)
    {
        printf("Index No %d: ", i);
        scanf("%d", &arr[i]);
    }
    m1 = m2 = 0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > m1)
        {
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2 && arr[i] < m1)
        {
            m2 = arr[i];
        }
    }
    printf("1 Maxium element: %d\n", m1);
    printf("2 Maxium element: %d", m2);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q23. Tarun sir (My Mentor) special question (basically advance version of Fibonacci series).
ans23.
#include <stdio.h>
int main()
{
    int s = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i <= 3)
        {
            printf("%d\t", i);
            s = s + i;
        }
        else
        {
            printf("%d\t", s);
            s = s + s;
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q24.write a program to Check if given string is palindrome.
ans24.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s",&str);

    char tmp[20];

    strcpy(tmp, str);
    strrev(tmp);
    (strcmpi(str, tmp) == 0)?printf("Palindrome"):printf("Not Palindrome");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q25.write a program to print this order "d  do  dog  o  og  g"
ans25.
#include <stdio.h>
int main(){
    char str[20],tmp[20];
    int i, j, k;
    printf("Enter a string: ");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i,k=0;str[j]!='\0';j++)
        {
            tmp[k++] = str[j];
            tmp[k] = '\0';
            printf("%s  ",tmp);
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q26.write a program to Rotate an array, for example:-
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
arr[10] = {1,2,3,4,5,6,7,8,9,10};
if p=5
output should like this:- 6 7 8 9 10 1 2 3 4 5
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans26.
#include <stdio.h>
int main()
{
    int arr[10];
    int i, pos, n = 10, temp[10];

    printf("Enter elements in array--\n");
    for(i=0;i<n;i++)
    {
        printf("Index No %d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);
    for (i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    for (i = pos; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    for (i = 0; i < pos; i++)
    {
        printf("%d  ", temp[i]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q27.write a program to Print all Even elements in beginning with bracket and odd elements in end of the array for example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
arr[10] = {1,2,3,4,5,6,7,8,9,10};

Output:- [2] [4] [6] [8] [10] 1 3 5 7 9 
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans27. 
#include <stdio.h>
int main()
{
    int arr[10], i, n = 10, temp[10];

    for (i = 0; i < n; i++)
    {
        printf("Index No %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        (arr[i] % 2 == 0) ? printf("[%d]  ", arr[i]) : printf("");
    }
    for (i = 0; i < n; i++)
    {
        (arr[i] % 2 != 0) ? printf("%d  ", arr[i]) : printf("");
    }
}

--------------------------------------------------------------------------------------------------------------------------------------
Q28. Reverse multiple words in a single character array at its own place, for example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char c[20] = {"my name is ronak"};

output should like this:- ym eman si kanor
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans28.
#include <stdio.h>
#include <string.h>
int main()
{
    char temp[20];
    int i, k, j;
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]s",&str);

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            temp[j++] = str[i];
            if (str[i + 1] == '\0')
            {
                temp[j] = '\0';
                printf("%s ", strrev(temp));
            }
        }
        else
        {
            temp[j] = '\0';
            printf("%s ", strrev(temp));
            j = 0;
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q29. write a program to input a 4 digit number from user and add till it dont become single digit number, for example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
int a = 4572 (4+5+7+2 = 18) (1 + 8 = 9) 

output should:- 9  
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans29. 
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);
    a = a % 10 + ((a / 10) % 10) + ((a / 100));
    a = a % 10 + ((a / 10) % 10);
    a = a % 10 + a / 10 ;
    printf("%d", a);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q30.write a program to input a number from user and 
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
if input  = 1, input  = 2, input  = 5
   Output = A, Output = BB, Output = EEEEE

'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans30. 
#include <stdio.h>
int main(int a,int i)
{
    printf("Enter a number: ");
    scanf("%d", &a);

    int n = a;
    
    for (i = 0; i < n; i++)
    {
        printf("%c", 64 + a);
    }
}
// alternate code little advance.
#include <stdio.h>
int main(int i,int a,int n)
{
    printf("Enter a number: ");
    scanf("%d", &a);
    n = a;
    for (i = 1; i <= n; i++)
    {
        printf("%d.%c\n", i, 64 + a);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q31.write a program to Factorial of given number by user.
ans31
#include <stdio.h>
int main()
{
    int x, facto = 1;
    printf("Enter Number: ");
    scanf("%d", &x);

    printf("Factorial of %d is: ", x);
    while (x != 0)
    {
        facto *= x;
        x--;
    }
    printf("%d", facto);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q32.write a program to Executing both if and else statement simultaneously
ans32. 
#include <stdio.h>
int main()
{
    if (1)
    {
    a: printf("hello ");
        goto b;
    }
    else
    {
        goto a;
    b: printf("World");
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q33.write a program to Find sum of first n natural numbers
ans33. 
#include <stdio.h>
int main()
{
    int a = 0, b;
    printf("Enter output limit: ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        a = a + i;
    }
    printf("%d", a);
}	
--------------------------------------------------------------------------------------------------------------------------------------
Q34. Write a program to input in array size of n and output all sub-array.
ans34.
#include <stdio.h>
int main()
{
    int i, j, n=4,arr[4];
    printf("Enter elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n+1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            printf("[%d,%d], ", arr[i],arr[j]);
        }
    }
    printf("\b\b ");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q35. Write a program to add and subtract two number without using '+','-' operator.
ans35.
#include <stdio.h>
int main()
{
    int n, a, m, k;
    printf("1.Add\n2.Subtract\nChoose you want to add or subtract :");
    scanf("%d", &m);
    if (m == 1)
    {
        printf("Enter Two number which you want to add: ");
        scanf("%d %d", &a, &n);
        for (int i = 1; i <= n; i++)
        {
            a++;
        }
        printf("Sum is %d", a);
    }
    else if (m == 2)
    {
        printf("Enter Two number which you want to subtract: ");
        scanf("%d %d", &a, &n);
        for (int i = 1; i <= n; i++)
        {
            a--;
        }
        printf("Subtraction is %d", a);
    }
    else
        printf("Wrong input");
}	

--------------------------------------------------------------------------------------------------------------------------------------
Q36.Write a program to input a number from user and break into 3 parts in such orde:-
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
if n = 15
then a = 3 (can be random)
     b = 7 (should be larger then first one)
     c = 5 (shoulder be larger then first one)
total  = 15
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans36.
#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    a = n/5;
    b = n/3;
    c = n - (a + b);
    printf("%d %d %d", a,b,c); 
}
--------------------------------------------------------------------------------------------------------------------------------------
Q37.Write a program to input a string from user and print all the character at odd indexes:-
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Input: A = "Raunaks"
Output: Ruas
Explained:- R a u n a k s 
            0 1 2 3 4 5 6 
Odd number:   a   n   k
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans37. 
#include <stdio.h>
int main(int i, int len)
{
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", &str);

    for (i = 0; str[i] != '\0'; i++);
    len = i;
    for (i = 0; i < len; i++)
    {
        (i % 2 != 0) ? printf("%c", str[i]) : len;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q38.Write a program to input a string from user and printits size without strings functions.
Ans38.
#include <stdio.h>
int main(int i)
{
    char str[50];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    for (i = 0; str[i] != '\0'; i++);
    printf("%d", i);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q39.Write a program to input a number from user and Find number of digits.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Input: A = 54265
Output: Number of digit is 5
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans39.
#include <stdio.h>
int main(int n, int count)
{
    count = 0;

    printf("Enter a number: ");
    scanf("%d",&n);
    for (count = 0; n > 0; count++, n = n / 10);

    printf("Lenght is %d", count);
}
--------------------------------------------------------------------------------------------------------------------------------------
