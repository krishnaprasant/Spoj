#include <stdio.h>
#include <math.h>
int main() {
	int L;
	float f;
	while(1){
	scanf("%d",&L);
	if(L==0)
	break;
	else{
	f=((L*L)/M_PI);
	f=f/2;
	printf("%.2f\n",f);
	}
	}
	return 0;
