import java.util.*;
class Student{
    private int rollNo;
    private String Name;
    Student(int rollNo, String Name){
        this.rollNo=rollNo;
        this.Name=Name;
    }/*
    void display(){
        System.out.println(rollNo+" "+Name);
    }*/
    public String toString(){
        return rollNo+" "+Name;
    }
}
public class javaexp6
{
	private static Scanner sc;

	public static void main(String[] args) {
	    sc = new Scanner(System.in);
	    int uid;
	    String Name;
		System.out.println("How many entries of Students");
		int n=sc.nextInt();
		Student st[]=new Student[n];
		for(int i=0;i<n;i++){
		    System.out.println("Enter Student Roll No:");
		    uid=sc.nextInt();
		    System.out.println("Enter Name:");
		    Name=sc.next();
		    st[i]=new Student(uid,Name);
		}
		System.out.println("Students are: ");
		try{
		    for (int i=0;i<=n;i++){
		        System.out.println(st[i]);
		        //st[i].display();
		    }
		}
		catch (ArrayIndexOutOfBoundsException e){
		    System.out.println("Array elements out of bound are: ");
		    System.out.println(e);
		}
	}
}

