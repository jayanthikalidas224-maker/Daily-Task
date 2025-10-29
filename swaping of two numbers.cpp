#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap two number %d%d",a,b);
	return 0;
}
