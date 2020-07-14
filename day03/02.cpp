# include <stdio.h>
int main(){
	int n=0;
	if(n>3){
		n = 9;
		printf("%d",n);
	}else if(n>1){
		printf("%d",n+2);
	}else{
		printf("%d",n);
	}
	return 0;
}
