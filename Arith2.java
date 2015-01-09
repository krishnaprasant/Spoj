import java.util.Scanner;
public class Arith2 {
	public static void main(String[] args) {

		Scanner sci = new Scanner(System.in);
		Scanner scl = new Scanner(System.in);
		Scanner scc = new Scanner(System.in);
		char ch='\0';
		int T = sci.nextInt();
		while(T!=0){
			System.out.println();
			long a = scl.nextLong();
			while(true){
				System.out.println(" ");
				ch = scc.next().charAt(0);
				if(ch == '=')
					break;
				System.out.println(" ");
				int b = sci.nextInt();
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


