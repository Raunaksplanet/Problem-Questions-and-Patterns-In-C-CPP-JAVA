Q1.Write a program to find average of three numbers.
Ans1.
#include <stdio.h>
int main()
{
   int a,b,c,d;
   printf("put three numbers: "); 
   scanf("%d %d %d" ,&a ,&b ,&c);
   printf("the aveage of three numbers is: %d",d = (a+b+c)/3);
}
--------------------------------------------------------------------------------------------------------------------------------------
Q2.check if given alphabet is vowel or not using switch function.
Ans2. 
#include <stdio.h>

int main()
{
    char a;
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
        printf("given character is vowel");
        break;
    default:
        printf("given character is not vowel");
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q3.check if any number is 2 digit or not
Ans3. 
#include<stdio.h>
int main()
{
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    printf("%d", x>9 && x<100);
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------
Q4. check if number is even or odd.
ans4. 
#include<stdio.h>
int main()
{ 
int x;
    printf("Put your value here: ");
    scanf("%d", &x);
    if(x % 2 == 0)
        printf("your number is even");
    else
        printf("your number is odd");
    
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------
q5. Check if given number is divisible by 2 or not.
ans5.
#include<stdio.h>
int main()
{ 
    int x;
    printf("Put your value here:");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
}
--------------------------------------------------------------------------------------------------------------------------------------
q6. check if given number is digit or not.
and6. 
#include <stdio.h>
int main()
{
   char a;
   printf("enter a value: ");
   scanf("&c",a);
   if (a>='0' && a<='9')
   printf("value is digit");
   else
   printf("value is not digit");
}
--------------------------------------------------------------------------------------------------------------------------------------
q7. swaping varible using third varible.
ans7.
#include <stdio.h>
int main()
{
   int a,b,c;
   printf("PUT TWO VALUES AND GIVE SOME SPACE BETWEEN THEM: ");
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("%d%d",a,b);
}
--------------------------------------------------------------------------------------------------------------------------------------
q8. swap varible without using third value.
ans8. 
#include <stdio.h>
int main()
{
   int a,b,c;
   printf("PUT TWO VALUES AND GIVE SOME SPACE BETWEEN THEM: ");
   scanf("%d %d",&a,&b);
   a = a + b;
   b = a - b;
   a = a - b;
   printf("%d %d",a,b); 
}
--------------------------------------------------------------------------------------------------------------------------------------
q9. swap value without using third value and arithmetic operator.
ans9.
  #include <stdio.h>
int main()
{
   int a,b,c;
   printf("PUT TWO VALUES AND GIVE SOME SPACE BETWEEN THEM:");
   scanf("%d %d",&a,&b);
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   printf("%d %d",a,b); 
}
--------------------------------------------------------------------------------------------------------------------------------------
q10. check if a person is eligible for voting or not using condition statements.
ans10. 
#include <stdio.h>
int main()
{
   int age;
   printf("enter your age: ");
   scanf("%d",&age);
   if(age>=18)
   printf("you are eligible for voting");
   else
   printf("you are not eligible for voting");
}
--------------------------------------------------------------------------------------------------------------------------------------
q11. check if number is negative, positive or zero
ans11. 
#include <stdio.h>
int main()
{
   int a;
   printf("enter a value: "); scanf("%d",&a);
   if(a>0)
   printf("Number is positive");
   else if(a<0)
   printf("number is negative");
   else
   printf("number is zero");
}
--------------------------------------------------------------------------------------------------------------------------------------
q12.check if a year is leap year or not
ans12. 
#include <stdio.h>
int main() 
{
   int a;
   printf("Enter a year: ");
   scanf("%d", &a);
   if (a % 400 == 0)
      printf("%d is a leap year.", a);
   else if (a % 100 == 0) 
      printf("%d is not a leap year.", a);
   else if (a % 4 == 0) 
      printf("%d is a leap year.", a);
   else 
      printf("%d is not a leap year.", a);
}
--------------------------------------------------------------------------------------------------------------------------------------
q13. same question 12 but in shorter
ans13.
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
q14. check is student is pass or fail passing marks 31
ans14. 
#include <stdio.h>
int main()
{
    
  int marks;
  printf("enter student mark: "); scanf("%d",&marks);
  if(marks>30)
  printf("student is paas");
  else if(marks<=30)
  printf("student is fail");
}
--------------------------------------------------------------------------------------------------------------------------------------
q15. same question no.14 but in shorter code
ans15.
#include <stdio.h>
int main()
{
    int marks;
    printf("enter student mark: "); scanf("%d", &marks);
    marks>30?printf("student is paas"):printf("student is fail");
}
--------------------------------------------------------------------------------------------------------------------------------------
q16. check if given alphabet is upercase or lower case
ans16.
#include <stdio.h>
int main()
{
    char c;
    printf("enter a alphabet: "); scanf("%c",&c);
    if(c >= 'A' && c <= 'Z')
    printf("upper case");
    else if (c >= 'a' && c<='z')
    printf("lower case");
    else
    printf("invalid input");
}
--------------------------------------------------------------------------------------------------------------------------------------
q17. Take input 3 subject marks using array and output it
ans17. 
#include<stdio.h>

int main(){
    int marks[2];
    printf("Enter Math,Englih,Computer subjects marks: "); scanf("%d %d %d",&marks[0],&marks[1],&marks[2]);
    printf("Your Math marks is: %d \nYour English marks is: %d \nYour Computer marks is: %d",marks[0],marks[1],marks[2]); 
}
--------------------------------------------------------------------------------------------------------------------------------------
q18. print semicolon without using semicolon
ans18. 
#include<stdio.h>

int main(){
    if(printf("%c",59)){}
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------
q19. Take input from user in array and print out the result
ans19. 
#include<stdio.h>

int main(){
    int i,adhar[5];
    for(i=0;i<5;i++){
        printf("%d index no: ",i);
        scanf("%d",&adhar[i]);
    }
    printf("Given number in array is\n");
    for(i=0;i<5;i++){
        printf("%d index no: %d\n",i,adhar[i]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q20. What should be the condition when following code snippet print both hello world:- 
    if ("condition")
        printf("Hello");
    else
        printf("World");
ans20. 
#include <stdio.h>

int main()
{
    if (!printf("Hello"))
        printf("Hello");
    else
        printf("World");
}
--------------------------------------------------------------------------------------------------------------------------------------
q21. Take input 3 subject marks using array and output it
ans21.
#include<stdio.h>

int main(){
    int marks[2];
    printf("Enter Math,Englih,Computer subjects marks: "); scanf("%d %d %d",&marks[0],&marks[1],&marks[2]);
    printf("Your Math marks is: %d \nYour English marks is: %d \nYour Computer marks is: %d",marks[0],marks[1],marks[2]); 
}
--------------------------------------------------------------------------------------------------------------------------------------
q22. print number from 1 to n without using loops
ans22. 
#include <stdio.h>
#define n 100
int main(int num){
   if(num<=n && printf("%d ",num) && main(num+1)){}
}
--------------------------------------------------------------------------------------------------------------------------------------
q23. take a input from user in array and reverse it
ans23. 
#include<stdio.h>    
int main()    
{    
 int arr[5];
 for(int i=0;i<=4;i++){
    printf("Enter array value: ");
    scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d",arr[i]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q24. first take input array size then take input array value form user and then print all values
ans24.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i <= n; i++){
        printf("enter array value at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q25. Convert a number into its binary value
ans25.
#include <stdio.h>
int main(){
    int n=10,arr[100],i,m;
    for(i=0;n>0;i++){
        arr[i]=n%2;
        n=n/2;
    }
    for(int j = i - 1;j>=0;j--){
        printf("%d",arr[j]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q26. Take input from user a number and convert it into its binary value ( same as q25 just take value from user)
ans26.
#include <stdio.h>
int main(){
    int n,arr[100],i,m;
    printf("Enter a number: "); scanf("%d",&n);
    for(i=0;n>0;i++){
        arr[i]=n%2;
        n=n/2;
    }
    for(int j = i - 1;j>=0;j--){
        printf("%d",arr[j]);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
Q27. Take input from user a number and convert it into its octal value
ans27.
#include <stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter a number: "); scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        arr[i]=n%8;
        n=n/8;
    }
    for(int j = i - 1;j>=0;j--)
    {
        printf("%X",arr[j]);
    }
    
}
--------------------------------------------------------------------------------------------------------------------------------------
q28. Take input from user a number and convert it into its hexadecimal value
ans28.
#include <stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter a number: "); scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        arr[i]=n%16;
        n=n/16;
    }
    for(int j = i - 1;j>=0;j--)
    {
        printf("%X",arr[j]);
    }
    
}
--------------------------------------------------------------------------------------------------------------------------------------
q29.Write a program to find armstrong number
ans29.
#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("armstrong  number ");
    else
        printf("not armstrong number");=
}
--------------------------------------------------------------------------------------------------------------------------------------
q30. write a program to find palinddrom number
ans30.
#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
}
--------------------------------------------------------------------------------------------------------------------------------------
q31. take 3 digit input number from user and Separate three number then print sum of trio number
ans31.
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
--------------------------------------------------------------------------------------------------------------------------------------
q32. same question number 31 but in shorter 
ans32.
#include <stdio.h>
int main()
{
    int n , a, b, c, d;
    printf("Enter 3 digit number: "); scanf("%d",&n);
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10; 
    printf("%d",d=a+b+c);
}
--------------------------------------------------------------------------------------------------------------------------------------
q33. same question number 31 but in shorter(more shorter then 32)
ans33.
#include <stdio.h>
int main()
{
    int n, a, b, c, d;
    printf("Enter 3 digit number: ");
    scanf("%d", &n);
    a = n % 10 + ((n / 10) % 10) + ((n / 100));
    printf("%d", a);
}
--------------------------------------------------------------------------------------------------------------------------------------
q34. same question number 31 but in shorter(more shorter then 33)
ans34.
#include <stdio.h>
int main(){
    int a=555;
    a = a % 10 + ((a / 10) % 10) + ((a / 100));
    printf("%d", a);}
--------------------------------------------------------------------------------------------------------------------------------------
q35. same question number 31 but in shorter(more shorter then 34)
ans35.
#include <stdio.h>
int main(){ int a=555; a = a % 10 + ((a / 10) % 10) + ((a / 100)); printf("%d", a);}
--------------------------------------------------------------------------------------------------------------------------------------
q36. Find 1st largest number in array
ans36.
#include <stdio.h>
int main()
{
    int arr[10]={12,51,84,46,88,89,240,25,11,44};
    int n=10,m1,m2,i;
    m1=0;
    for(i=0;i<n;i++){
        if(arr[i]>m1)
            m1=arr[i];
    }
    printf("%d\t",m1);
}
--------------------------------------------------------------------------------------------------------------------------------------
q37. Find 2 largest numbers in array
ans37.
#include <stdio.h>
int main()
{
    int arr[10]={12,51,84,46,88,89,240,25,11,44};
    int n=10,m1,m2,i;
    m1=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>m1)
        {
            m2=m1;
            m1=arr[i];
        }
            else if(arr[i]>m2 && arr[i]<m1)
            {
             m2=arr[i];
            }
    }
    printf("%d & %d",m1,m2);
}
--------------------------------------------------------------------------------------------------------------------------------------
q37. Tarun sir special question (basically advance version of Fibonacci series).
ans37.
#include <stdio.h>
int main(){
    int s=0;
    for (int i=1;i<=10;i++){
        if(i<=3){
            printf("%d\t",i);
            s = s + i;
        }
        else{
            printf("%d\t",s);
            s = s + s;
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q38. Check if given name in character array is palindrome or not
ans38.
#include <stdio.h>
#include <string.h>
int main(){
    char c[20] = "NITIN";
    char d[20];

    strcpy(d,c);
    strrev(d);
    if(strcmpi(c,d)==0)
    printf("Given name is a palindrome");
    else
    printf("Give name is not a palindrome");
}
--------------------------------------------------------------------------------------------------------------------------------------
q39. print this order "d       do      dog     dogo    dogog   dogogg"
ans39.
#include <stdio.h>
int main(){
    char c[20] = "dog",temp[20];
    int i, j, k;

    for(i=0;c[i]!='\0';i++)
    {
        for(j=i;c[j]!='\0';j++)
        {
            temp[k++] = c[j];
            temp[k] = '\0';
            printf("%s\t",temp);
        }
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q40. Rotate an array for example:-
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
arr[10] = {1,2,3,4,5,6,7,8,9,10};
if p=5
output should like this:- 6 7 8 9 10 1 2 3 4 5
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans40.
#include <stdio.h>
int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i, f, n=10, temp[10];
   printf("Enter element from where you want to start rotation: "); scanf("%d",&f);
   for(i=0;i<f;i++)
   {
    temp[i] = arr[i];
   }
   for(i=f;i<n;i++)
   {
    printf("%d\t",arr[i]);
   }
   for(i=0;i<f;i++)
   printf("%d\t",temp[i]);
}
--------------------------------------------------------------------------------------------------------------------------------------
q41. Print all array even element in the end position and odd element in beginning position, for example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
arr[10] = {1,2,3,4,5,6,7,8,9,10};

output should like this:- 1 3 5 7 9 2 4 6 8 10
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans41. 
#include <stdio.h>
int main() {
   int arr[10] = {1, 2, 4, 3, 5, 6, 7, 8, 9, 10};
   int i, f=0, n=10, temp[10],g=0;
   for(i=0;i<n;i++)
   {
      if(arr[i] %2 != 0)
      printf("%d\t",arr[i]);
   }
   for(i=0;i<n;i++)
   {
      if(arr[i]%2==0)
      printf("%d\t",arr[i]);
   }
}
--------------------------------------------------------------------------------------------------------------------------------------
q42. Reverse multiple words in a single character array at its own place, for example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
char c[20] = {"my name is ronak"};

output should like this:- ym eman si kanor
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans42.
#include <stdio.h>
#include <string.h>
int main() {
   char temp[20];
   int i,k,j;
   char c[20] = {"my name is ronak"};

  for(i=0,j=0;c[i] != '\0'; i++)
  {
   if(c[i] != ' ')
   {
    temp[j++] = c[i];
    if(c[i+1] == '\0')
    {
      temp[j] = '\0';
      printf("%s ",strrev(temp)); 
    }
   }
   else{
    temp[j]='\0';
    printf("%s ",strrev(temp));
    j=0;
   }
  }
}
--------------------------------------------------------------------------------------------------------------------------------------
q43. write a program to input a 4 digit number from user and add till it dont become single digit, for example.
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
int a = 4572 (4+5+7+2 = 18) (1 + 8 = 9) 

output should:- 9  
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans43. 
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
q44. if v = 1 then stdout A, if v = 2 then stdout BB, if v=5 then stdout E E E E E.
ans. 
#include <stdio.h>

int main()
{
    int a,i;
    printf("Enter a value: "); scanf("%d",&a);
    int n=a;
    for(i=0;i<n;i++)
    {
        printf("%c",64+a);
    }
}
// alternate code little advance.
#include <stdio.h>

int main()
{
    int i,a,n;
    printf("Enter a value: "); scanf("%d",&a);
    n=a;
    for(i=1;i<=n;i++)
    {
        printf("%d.%c\n",i,64+a);
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q45. Factorial of given number by user.
ans45
#include <stdio.h>
int main()
{
	int x,facto=1;
	printf("Enter Number: "); scanf("%d",&x);
	printf("Factorial of %d is: ",x);

	while(x!=0)
	{
		facto *= x;
		x--;
	}
	printf("%d",facto);
}
--------------------------------------------------------------------------------------------------------------------------------------
q46. Multiplication of array.
ans46.
#include <stdio.h>

int main()
{
    int a[5] = {2,2,2,2,2};
    int b[5] = {2,3,4,5,6};
    int c[5];
    int i,n=5;

    for(i=0;i<n;i++)
    {
        c[i] = a[i] * b[i];
    }
    for(i=0;i<n;i++)
    {
    printf("%d\t",c[i]);
    } 
}
--------------------------------------------------------------------------------------------------------------------------------------
q47.Convert a given number into positive,negative and zero
ans47.
#include <stdio.h>
int main()
{
	int n;
	
    printf("Enter an integer : ");
    scanf("%d",&n);
    
   if (n<0)
   { 
       n=-n;
       printf("converted negative integar into positive: %d\n",n);
	}
	
   if (n>0)
   { 
       printf("converted integar into positive: %d\n",n);
	}

   if (n>0 || n<0)
   { 
      n = 0;
       printf("converted integar into zero: %d\n",n);
	}
}
--------------------------------------------------------------------------------------------------------------------------------------
q48.Executing both if and else statement simultaneously
ans48. 
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
q49. Find sum of first n natural numbers
ans49. 
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
q50. Write a program to input in array size of n and output all sub-array.
ans50.
#include<stdio.h>

int main(){
    int i,j,n;
   printf("Enter array size: "); scanf("%d",&n);

   int arr[n];

   printf("Enter array elemnet-- \n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   
   for(i=0;i<n;i++)
   {
      for(j=i;j<n;j++)
      {
         printf("%d  ",arr[j]);
      }
      printf("\n");
   }
}
--------------------------------------------------------------------------------------------------------------------------------------
q51. Write a program to add and subtract two number without using '+','-' operator.
ans51.
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
        printf("Answer is %d", a);
    }
    else if(m == 2)
    {
        printf("Enter Two number which you want to subtract: ");
        scanf("%d %d", &a, &n);
        for (int i = 1; i <= n; i++)
        {
            a--;
        }
        printf("Answer is %d", a);
    }
    else
    printf("Wrong input");
}	
--------------------------------------------------------------------------------------------------------------------------------------
q52.Write a program to increment pointer with array data and output address and data of arrray in order.
ans52.	
#include <stdio.h>

int main()
{
    int arr[] = {10,20,30};
    int i,*ptr;
    ptr = arr;
    for(i=0;i<3;i++)
    {
        printf("Address of variable [%d]: = %x\n",i,ptr);
        printf("data of variable    [%d]: = %d\n",i,*ptr);
        ptr++;
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q53.Write a program to input a number from user and break into 3 parts in such orde:-
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
if n = 15
then a = 3 (can be random)
     b = 7 (should be larger than 1 one)
     c = 5 (shoulder be larger then 1 one)
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans53.
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
q54.Write a program to input a string from user and print output all the character at odd indexes:-
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Input: A = "Raunaks"
Output: Ruas
Explained:- R a u n a k s 
            1 2 3 4 5 6 7 
Odd number: R   u   a   s
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans54. 
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50] ;
    printf("Enter a string: "); scanf("%[^\n]s", &arr);
    int l = strlen(arr);
    for(int i=0; i<l; i++)
    {
        (i % 2 == 0)?printf("%c",  arr[i]):printf("");
    }
}
--------------------------------------------------------------------------------------------------------------------------------------
q55. Write a program to input a string from user and print output the size of string without using strlen function
Ans55.
#include <stdio.h>
int main()
{
    int i;
    char str[50];
    printf("Enter a string: "); scanf("%[^\n]s", str);
    for( i = 0 ; str[i]!='\0' ;i++);
    printf("%d", i);
}	
--------------------------------------------------------------------------------------------------------------------------------------
q56 Find number of digits in a number figure
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Input: A = 54265
Output: Number of digit is 5
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
ans56.
#include <stdio.h>
int main()
{
    int n = 383456, counter=0;
    for(counter = 0 ; n>0 ; counter++, n=n/10);
    printf("Lenght is %d",counter);
}	
--------------------------------------------------------------------------------------------------------------------------------------
q57. Write a program to find 3 maxium numbers in array
ans57.
#include <stdio.h>
int main()
{
    int arr[10],n = 10, i, m1 = 0, m2 = 0, m3 = 0;
    printf("Enter element in array--- \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i<n; i++)
    {
        if(arr[i] > m1)
        {
            m3 = m2;
            m2 = m1;
            m1 = arr[i];
        }
        else if(arr[i]>m2 && arr[i]<m1)
        {
            m3 = m2;
            m2 = arr[i];
        }
        else if(arr[i]<m2 && arr[i] < m1 && arr[i]>m3)
        {
            m3 = arr[i];
        }
    }
    printf("1 Maxium number in array is %d\n", m1);
    printf("2 Maxium number in array is %d\n", m2);
    printf("3 Maxium number in array is %d", m3);
}
--------------------------------------------------------------------------------------------------------------------------------------
q58. Print this pattern 	
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
2  3  4  5  6  7  8  9  10  
3  4  5  6  7  8  9  10
4  5  6  7  8  9  10
5  6  7  8  9  10
6  7  8  9  10
7  8  9  10
8  9  10
9  10
10
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''
Ans58.
#include<stdio.h>
int main()
{
    int i, j, str[10] = {1,2,3,4,5,6,7,8,9,10};

    for(i=0; i<10 ;i++)
    {
        for(j=i+1; j<10 ;j++)
        {
            str[i] = str[j];
            printf("%d  ",str[i]);
        }
        printf("\n");
    }
}	
--------------------------------------------------------------------------------------------------------------------------------------
q59.Write a program to create own header file and than use it.
ans59.
-- First we'll create a file name(name what ever you want for this questions we'll create file named head.h) remeber file extension shoulb be .h
-- the file:--
	
// File start
void add(int a, int b)
{
    printf("Added value: %d\n", a + b);
}
void multiply(int a, int b)
{
    printf("Multiplied value: %d\n", a * b);
}
// File End

-- 2nd we create our main c file in whcih we use our header file 

#include<stdio.h>
#include "name.h"
int main()
{
    
    add(4,5);
    multiply(2,2);
}

--------------------------------------------------------------------------------------------------------------------------------------
q60.
