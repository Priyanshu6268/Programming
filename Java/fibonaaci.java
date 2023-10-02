import java.util.Scanner;
public class fibonaaci
{
	private static Scanner myObj = new Scanner(System.in);

    public static void main(String[] args) {
	    int f1=1,f2=1,f3,i,n;
	    System.out.println("Enter series upto: "); 
        n = myObj.nextInt();   
        System.out.print(f1+" "+f2);
        for(i=2;i<n;++i)
        {    
            f3=f1+f2;    
            System.out.print(" "+f3);    
            f1=f2;    
            f2=f3;    
        }  
		//System.out.println("Hello World");
	}
}

