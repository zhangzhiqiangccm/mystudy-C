# include <stdio.h>
int main(){
	int a[10] = {1,4,9,25,36,49,64};
	int *p = a;
	int *q = &a[5];
	printf("q = %d\n",q);
	printf("p = %d\n",p);
	printf("q-p = %d",q-p);
	return 0;
}
