#include<stdio.h>

int main() {
	double n1, n2, n3, ne;

	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);

	if(n1>=n2) {
		ne=n1;
		n1=n2;
		n2=ne;
	} 

	if(n1>=n3) {
		ne=n3;
		n3=n1;
		n1=ne;
	} 

	if(n2>=n3) {
		ne=n3;
		n3=n2;
		n2=ne;
	}

	printf("%.2lf, %.2lf, %.2lf\n", n1, n2, n3);

	return 0;
}