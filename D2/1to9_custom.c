#include <stdio.h>
extern int load(int x, int y);
int main(){
	int result = 0;
	int count = 9;
	result = load(0X0,count+1);
	printf("sum of number from 1 to %d is %d\n",count,result);
	return 0;
}
