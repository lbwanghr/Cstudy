#include <stdio.h>
#include "cal.h"
int main(){
	int a,b;
	printf("please input two numbers\n");
	scanf("%d%d",&a,&b);
	printf("the sum is %d",Add(a,b));
	return 0;
}
