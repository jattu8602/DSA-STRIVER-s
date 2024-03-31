package Basics.java;

import java.util.Scanner;

public  class get_input_from_user
{
    public static void main(String[] args)
    {
        int a;
        float b;
        String s;
        Scanner in = new Scanner(System.in);
        System.out.println( "Enter an integer : ");
        a=in.nextInt();
        
        System.out.println("The entered integer is : "+a);
        System.out.print("\nEnter a floating-point number : ");
        b=in.nextFloat();
        System.out.println("The entered floating point number is : "+b);
        System.out.print("\nEnter a string : ");
        s = in.nextLine();
        System.out.println("The entered string is : "+s);
    }
}