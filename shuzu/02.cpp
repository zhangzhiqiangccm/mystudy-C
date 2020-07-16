# include <stdio.h>
int main(){
	int a[10];
	scanf("%d",&a[0]);
	for(int i=1;i<10;i++){
		a[i] = 2*a[i-1];
	}
	for (int j=1;j<10;j++){
		printf("%d\n",a[j]);
	}
	return 0;
	
}
