#include <stdio.h>

long long tongcs(long long n){
	long long m=n,s=0;
	while(m!=0){
		s=s+m % 10;
		m=m/10;
	}
	return s;
}

int main(){
	long long n;
	printf("Nhap n: ");scanf("%lld",&n);
	printf("Tong cac chu so cua n: %lld",tongcs(n));
	return 0;
}
