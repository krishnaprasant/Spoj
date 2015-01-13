import java.util.Scanner;
class Anarc09b {

	public static void main(String[] args) {
		long W,H;
		Scanner sc =new Scanner(System.in);
		while(true)
		{
			W = sc.nextLong();
			H = sc.nextLong();
			if(W==0 || H==0)
				break;
			else
				find(W,H);
		}
	}
	static void find(long W,long H)
	{
		long res = (W>H)?gcd(W,H):gcd(H,W);
		long lcm = (W*H)/res;
		long a = lcm/W;
		long b = lcm/H;
		long ans = a*b;
		System.out.println(ans);
	}
	static long gcd(long q, long w)
	{
		int rem=1;
		while (rem !=0)
		{
			rem =(int) (q%w);
			q = w;
			w = rem;
		}
		return q;
	}
}


