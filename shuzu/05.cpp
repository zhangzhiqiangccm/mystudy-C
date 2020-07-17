# include <stdio.h>
# include <string.h>
int main(){
	int a[5] = {1,6,9,2,4};
	memset(a,0,sizeof(a));
	for(int i=0;i<5;i++){
		printf("%d",a[i]); 
	}
	return 0 ;
}
