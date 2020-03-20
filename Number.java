import java.io.*;
import java.util.Scanner;

public class Number{
    public static void main(String args[])
   {
    Scanner in=new Scanner(System.in);
    int t=in.nextInt();
    while(t>0)
    {
        int count=0;
        int n=in.nextInt();
        String s=Integer.toString(n);
        for(int i=0;i<s.length();i++)
        {
            int y=Integer.parseInt(s.substring(i,i+1));
            if((y!=0) && (n%y==0))
            {
                count++;
            }
        }
        System.out.println(count);
        t--;
    }
    }

}