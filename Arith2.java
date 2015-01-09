import java.util.Scanner;
class Arith2
{
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		char ch='\0';
		int T = sc.nextInt();
		while(T!=0){
			System.out.println();
			long a = sc.nextLong();
			while(true){
				ch = sc.next().charAt(0);
				if(ch == '=')
					break;
				int b = sc.nextInt();
				if(ch=='/')
					a=a/b;
				else if(ch=='*')
					a=a*b;
				else if(ch=='+')
					a=a+b;
				else if(ch=='-')
					a=a-b;
			}
			System.out.println(a);
			T--;
		}
	}
}
