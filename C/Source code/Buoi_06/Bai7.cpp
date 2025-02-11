//6.7
#include <stdio.h>
#include <math.h>

int checkPrime(int n){
	if(n<2) return 0;
	for(int i=2;i <= sqrt(n);i++){
		if(n%i==0)	return 0;
	}
	return 1;
}

int main(){
	int a,b, check = 1;
	scanf("%d%d",&a,&b);
	for(int i = a; i <= b; ++i){
		if(checkPrime(i) == 1){
			printf("%d ",i);
			check = 0;
		}
	}
	if(check) printf("-1");
}
