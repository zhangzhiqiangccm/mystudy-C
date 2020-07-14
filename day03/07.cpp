# include <stdio.h>
int main(){
	int a = 1, b =2;
	switch(a+b){
		case 2:
			printf("%d\n",a);
		case 3:
			printf("%d\n",b);
		case 4 :
			printf("%d\n",a+b);
		default:
			printf("sad\n");
	}
	return 0;
}
