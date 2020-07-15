# include <stdio.h>
int main(){
	int sum = 0;
	for(int i = 1;i<=9;i++){
		if(i %2 ==1) continue;
		sum = sum + i;
	}
	printf("sum = %d",sum);
	return 0;
}
