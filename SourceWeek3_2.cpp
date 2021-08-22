#define _crt_secure_no_warnings 1
#include<stdio.h>
int main() {
	int n1, n2, n3;
	printf("Enter number : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	int num[] = {n1,n2,n3};
	int max = num[0];
	for (int i = 0; i < 3; i++) {
		if (num[i] > max){
			max = num[i];
		}
	}
	printf("The most valuable number is %d ",max);
	return 0;
}