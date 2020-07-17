# include <stdio.h>
int main(){
	int a[3][4] = {{1,5,6},{84},{9,6,3,5}};
	for(int i=0;i<3;i++){
		for(int j = 0;j<4;j++){
			printf("%d\n",a[i][j]);
		}
	}
	
	
	return 0;
}
