# include <stdio.h>
int main(){
	int n = 12345, count = 0;
	while(n){
		count = count +n%10; //各位数字相加 
		n = n/10;
	}
	printf("%d",count);
	return 0;
}
