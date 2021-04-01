#include <stdio.h>

int main() {
	double l;
	scanf("%lf",&l);
	if(l>0 && l<2000){
		printf("%.10lf",l*l*3.141592653589793);
	}
	return 0;
}