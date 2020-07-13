#include <stdio.h>
#define ADD(a,b) ((a)+(b)) //多加括号，宏定义是直接替换掉的 
int main(){
	int num1 = 3,num2 = 5;
	printf("%d",ADD(num1,num2));
	return 0;
} 
