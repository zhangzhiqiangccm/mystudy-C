#include<stdio.h>
int main(){
	int a = 2,b = 2,n1,n2;
	n1 = a++;
	n2 = ++b;
	printf("%d\n%d\n%d\n%d",n1,n2,a,b);
	return 0;
} 
