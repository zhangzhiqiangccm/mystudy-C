# include <stdio.h>
int main(){
	int  a;
	char c,str[10];
	scanf("%d%c%s",&a,&c,str); //输出的结果里是可以为扫描到的空格 ，字符数组不需要& 
	printf("a = %d,c = %c,str = %s",a,c,str);
	return 0;
}
