/*
 q1. 
 Write a program to enter a number from user and reverse it without 
 using loops and operators.
 */

import java.util.Scanner;
public class Q1_ReverseNumber{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter Number: ");
        n = sc.nextInt();

        String str = Integer.toString(n);
        StringBuilder sb = new StringBuilder(str);
        System.out.println("Reversed Number: " + sb.reverse());
    }
}
