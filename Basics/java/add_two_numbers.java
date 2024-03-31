package Basics.java;
import java.util.*;
import java.util.Scanner;
import java.math.*;

public  class add_two_numbers
{
    public static void main(String[] args)
    {
        int x,y,z;
        System.out.println("enter two integers to calculate their sum ");
        Scanner sc=new Scanner(System.in);
        x =sc.nextInt();
        y =sc.nextInt();
        
        z=x+y;
        System.out.println("sum of entered integers = "+z);

    }
}