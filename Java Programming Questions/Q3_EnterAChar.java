/*
 q3. Write a program to enter a character from user.
*/


import java.util.Scanner;
class Q3_EnterAChar{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        char c;
        System.out.print("Enter Character: ");
        c = sc.next().charAt(0);

        System.out.print("Character is " + c);
    }
}
