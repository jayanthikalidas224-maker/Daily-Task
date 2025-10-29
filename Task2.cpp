#include<stdio.h>
int main(){
	int a,b,temp;
	printf("%d\t%d\t",a,b);
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swaping:a=%d,b=%d\n",a,b);
	return 0;
}
