
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
