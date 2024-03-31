import java.util.*;
import java.util.Scanner;

public  class swap_using_variable 
{
    public static void main(String[] args)
    {
        int x,y,temp;
        System.out.println( "Enter the value of x : ");
        Scanner sc = new Scanner(System.in);
        x=sc.nextInt();
        
        System.out.println("Enter the value of y :");
        y=sc.nextInt();
        
        // Displaying original values of x and y
        System.out.print("\nOriginal Value of x is: "+x+"\n");
        System.out.print("Original Value of y is: "+y+"\n");
        
        temp = x;                    
        x = y;      
        y = temp;     
        
        // After Swapping
        System.out.print("\nValue of x after swapping with y is: "+x+"\n");
        System.out.print("Value of y after swapping with x is: "+y+"\n");  
    }
}