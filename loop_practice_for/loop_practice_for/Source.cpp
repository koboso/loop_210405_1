/*
	1. 50���� ���� 5�� ����� ����ϼ���.

/*
	#include<iostream>
	using namespace std;
	void main(){
		for (int i = 1; i < 10; i ++) {
			cout<<i*5<<endl;
		}
		fgetc(stdin);
	}
*/


/*
2. 1�� ~ 9�� ���� �������� ����ϼ���

	#include<stdio.h>
	void main(){
		for (int i = 1; i <= 9; i++) {
			printf("%d �� ======= \n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
*/


/*
*       1
**      2
***     3
****    4
*****   5
* 
* 
* 
#include<iostream>
void main() {
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <=i ; j++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}
*/


/*
*****
****
***
**
*


#include<iostream>

void main() {

	for (int i = 5; i > 0; i--) {
		for (int j = i; j > 0 ; j--) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}


	for (int i = 5; i > 0; i--) {
		for (int j = i; j > 0 ; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

*/
#include<iostream>

void main() {
	fgetc(stdin);
}