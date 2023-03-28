
Q1.Write a program to find average of three numbers.
Ans1.
#include <stdio.h>
int main(int a,int b, int c)
{
   printf("Enter Three numbers: "); 
   scanf("%d %d %d" ,&a ,&b ,&c);
   printf("Aveage of three number is %d",(a+b+c)/3);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q2.Write a program to check if given alphabet is vowel or not using switch function.
Ans2. 
#include <stdio.h>
int main(char a;)
{
    printf("Enter any alphabet: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("it's Vowel");
        break;
    default:
        printf("It's not vowel");
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q3.Write a program to check if any number is two digit or not
Ans3. 
#include<stdio.h>
int main(int x)
{
    printf("Enter a number: ");
    scanf("%d",&x);
    (x>9 && x<100)?printf("%d is Two digit",x):printf("%d is not two digit",x); 
}
--------------------------------------------------------------------------------------------------------------------------------------
Q4.Write a program to check if number is even or odd.
ans4. 
#include <stdio.h>
int main(int x)
{
    printf("Enter a number: ");
    scanf("%d", &x);
    (x % 2 == 0)? printf("%d is Even",x) : printf("%d is not Even",x);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q5.Write a program to Check if given number is divisible by 2 or not.
ans5.
#include<stdio.h>
int main(int x)
{ 
    printf("Enter a number: ");
    scanf("%d", &x);
    ("%d", x % 2 == 0)?printf("%d is divisible by 2",x):printf("%d is not divisible by 2",x);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q6.Write a program to check if given number is digit or not.
and6. 
#include <stdio.h>
int main(char a)
{
   printf("Enter a character: ");
   scanf("%c",&a);
   (a>='0' && a<='9')?printf("\"%c\" Character is digit",a):printf("\"%c\" Character is not digit",a);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q7.Write a program to swaping varible using third varible.
ans7.
#include <stdio.h>
int main(int a,int b,int c)
{
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore\nA = %d\nB = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter\nA = %d\nB = %d", a, b);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q8.Write a program to swap varible without using third value.
ans8. 
#include <stdio.h>
int main(int a,int b)
{
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   printf("\nBefore\nA = %d\nB = %d\n", a, b);
   a = a + b;
   b = a - b;
   a = a - b;
   printf("\nAfter\nA = %d\nB = %d", a, b);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q9.Write a program to swap value without using third value and arithmetic operators.
ans9.
#include <stdio.h>
int main(int a,int b)
{
   printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);
   printf("\nBefore\nA = %d\nB = %d\n", a, b);
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   printf("\nAfter\nA = %d\nB = %d", a, b); 
}
--------------------------------------------------------------------------------------------------------------------------------------
Q10.Write a program to check if a person is eligible for voting or not using condition statements.
ans10. 
#include <stdio.h>
int main(int age)
{
   printf("Enter age: ");
   scanf("%d",&age);
   (age>=18)?printf("Eligible"):printf("Not Eligible");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q11.Write a program to check if number is negative, positive or zero
ans11. 
#include <stdio.h>
int main(int a)
{
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("Number is positive");
    else if (a < 0)
        printf("number is negative");
    else
        printf("number is zero");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q12.Write a program to check if a year is leap year or not
ans12. 
#include <stdio.h>
int main(int a)
{
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("Number is positive");
    else if (a < 0)
        printf("number is negative");
    else if(a == 0)
        printf("number is zero"); 
}

// Alternative codes
// 1)
#include <stdio.h>
int main()
{
  int a;
  printf("\n Please Enter any number you wish \n "); scanf("%d", &a);
  if (( a%400 == 0)|| (( a%4 == 0 ) &&( a%100 != 0)))
      printf("%d is a leap year", a);
  else
      printf("%d is not a leap year", a);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q13.Write a program to check if given alphabet is upercase or lower case
ans13.
#include <stdio.h>
int main(char c)
{
    printf("Enter a Alphabet: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Upper case");
    else if (c >= 'a' && c <= 'z')
        printf("Lower case");
    else
        printf("Invalid input");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q14.Write a program to print semicolon without using semicolon
ans14. 
#include<stdio.h>
int main()
{
    if(printf("%c",59)){}
}

--------------------------------------------------------------------------------------------------------------------------------------
Q15. What should be the condition when following code snippet print both hello world:- 
    if ("condition")
        printf("Hello ");
    else
        printf("World");
Ans15

#include <stdio.h>
int main()
{
    if (!printf("Hello "))
        printf("Hello ");
    else
        printf("World");
}
-------------------------------------------------------------------------------------------------------------------------------------
Q16.Write a program to print number from 1 to n without using loops
ans16. 
#include <stdio.h>
#define n 10
int main()
{
    static int i = 1;
    if (i <= n && printf("%d  ", i++)){
        main();
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q17.Write a program to Perform Conversions (binary,octal,hexa)
ans17.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char c;
    printf("Conversions--\n");
    printf("1)Binary  2)Octal\n3)Hexadecimal");
    printf("\nSelect number to perform Conversion: ");
    c = getch();
    system("cls");
    if (c == '1')
    {
        int n, i, j, arr[10];
        printf("Enter a number: ");
        scanf("%d", &n);

        for (i = 0; n > 0; i++)
        {
            arr[i] = n % 2;
            n = n / 2;
        }

        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", arr[j]);
        }
    }
    else if (c == '2')
    {
        int n, arr[10], i;
        printf("Enter a number: ");
        scanf("%d", &n);
        for (i = 0; n > 0; i++)
        {
            arr[i] = n % 8;
            n = n / 8;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%X", arr[j]);
        }
    }
    else if (c == '3')
    {
        int n, arr[100], i;
        printf("Enter a number: ");
        scanf("%d", &n);
        for (i = 0; n > 0; i++)
        {
            arr[i] = n % 16;
            n = n / 16;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%X", arr[j]);
        }
    }
    else
    printf("Wrong input");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q18.Write a program to find armstrong number
ans18.
#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    (temp == sum)?printf("Armstrong"):printf("Not Armstrong");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q19.write a program to find palinddrom number
ans19.
#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    (temp == sum)?printf("palindrome number "):printf("not palindrome");
}
--------------------------------------------------------------------------------------------------------------------------------------
Q20.write a program to input three digit number from user and print sum of trio number.
ans20.
#include <stdio.h>
int main()
{
    int n , a, b, c, d;
    printf("Enter 3 digit number: "); scanf("%d",&n);
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    d = a + b + c;
    printf("%d", d);
}

// Alternative codes
// 1)
#include <stdio.h>
int main()
{
    int n, a, b, c, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n % 10 + ((n / 10) % 10) + ((n / 100));
    printf("%d", a);
}
--------------------------------------------------------------------------------------------------------------------------------------
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
Ans38.
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
