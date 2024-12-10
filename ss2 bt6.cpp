#include<stdio.h>
	int main() {
		float radius;
		float pi = 3.14;
		printf("nhap vao ban kinh: ");
		scanf("%f", &radius);
		float area = radius * radius * pi;
		float circumference =  2 * pi * radius;
		printf("circumference la: %.2f\n", circumference);
		printf("area la: %.2f\n", area);
		return 0; 
	}
