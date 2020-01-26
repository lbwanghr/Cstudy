#include<stdio.h>
#include"add.c"
int main(){
	int a,b;
	printf("please input two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d\n",a,b,Add(a,b));
	return 0;
}
