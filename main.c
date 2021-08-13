#include<stdio.h>

int add(int x ,int y);
int sub(int x ,int y);
int main()
{
	int a,b;
	printf("Enter the value a and b!");
	scanf("%d %d",&a ,&b);
	printf("This is barun\n result:%d",add(a,b));
	printf("This is barun\n result:%d",sub(a,b));
	return 0;
}
