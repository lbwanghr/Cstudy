#include<stdio.h>
#include"src/mightytool.h"
int main(){
	char name[20];
	printf("please input a string:\n");
	scanf("%s",name);
	mouse(name);
	return 0;
}
