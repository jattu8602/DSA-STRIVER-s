import java.util.*;
import java.util.Scanner;

public  class FtoC
{
    public static void main(String[] args)
    {
        float temperature;
        Scanner in = new Scanner(System.in);
        System.out.println("enter temp. in fehrenheit");
        temperature = in.nextFloat();
        temperature = ((temperature-32)*5)/9 ;
        System.out.println("temperature in celcius = "+ temperature);
    }
}
