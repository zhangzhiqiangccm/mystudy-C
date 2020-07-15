# include <stdio.h>
int main(){
	int n,sum = 0;
	for(int i = 1;i<=100;i++){
		sum = sum +i;
		if(sum>=2000) break;
	}
	printf("sum = %d",sum);
	return 0;
}
