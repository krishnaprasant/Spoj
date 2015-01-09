#include <stdio.h>

int main() {
		int T;
		long long a,b;
		char ch;
		scanf("%d",&T);
		while(T!=0){
			printf("\n");
			scanf("%lld",&a);
			while(1){
				printf(" ");
				scanf("%c",ch);
				if(ch == '=')
					break;
				printf(" ");
				scanf("%d",&b);
				if(ch=='/')
					a=a/b;
				else if(ch=='*')
					a=a*b;
				else if(ch=='+')
					a=a+b;
				else if(ch=='-')
					a=a-b;
			}
			printf("%lld",a);
			T--;
		}
	return 0;
}
