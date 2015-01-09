#include <stdio.h>
void calc (int n);
int main() {
int N;
	while(1)
	{
	scanf("%d",&N);
		if(N==0)
			break;
		else
			calc(N);
	}		
	return 0;
}
void calc(int N){
 
long long total = 0;
int i;
	for(i=N; i>0; i--)
			total = total + (i*i);
	printf("%lld\n",total);
} 
