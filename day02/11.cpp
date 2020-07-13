# include <stdio.h>
# include <math.h>
const double pi = acos(-1.0);
int main(){
	double db1 = sin(pi*45/180);
	double db2 = cos(pi*45/180);
	double db3 = tan(pi*45/180);
	printf("%f\n%f\n%f",db1,db2,db3);
	return 0;
}
