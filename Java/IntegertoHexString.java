class Student1 extends Object{
    private int rollNo;
    private String name;
    public Student1(int r, String n){
        rollNo=r;
        name=n;
    }
    public String toString(){
        return rollNo+" "+name;
    }
}
public class IntegertoHexString
{
	public static void main(String[] args) {
		Student1 s1=new Student1(101,"Abcd");
		System.out.println(s1);
	}
}
//Integer.toHexString()
