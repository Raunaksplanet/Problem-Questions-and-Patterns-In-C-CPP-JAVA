/*
    q2. Write a program to convert a number into string.
*/


import java.util.Scanner;
class Q2_IntConvertString{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter Number: ");
        n = sc.nextInt();

        String str = Integer.toString(n);
        System.out.println("String: " + str);
        System.out.println("Number: " + n);
    }
}
