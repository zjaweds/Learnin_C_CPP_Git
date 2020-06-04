#include<iostream>
using namespace std;

int main(){
	printf("\n\tHell's this World!\n\t");
	for(int i=0;i<6;i++){
		for(int j=0;j<i;j++)
			printf("*");
		printf("\n\t");
	}
	return 0;
}
