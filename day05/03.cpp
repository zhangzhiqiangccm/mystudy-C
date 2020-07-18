# include <stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d", a+i); //原本是填 &a[i] ，二者等价，这里的 a+i其实就是一个地址，*（a+i）就是地址的值 
	}
	for(int i = 0;i<10;i++){
		printf("%d ",*(a+i));
	}
	return 0;
}
