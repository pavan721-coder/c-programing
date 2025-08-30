#include<stdio.h>
int main()
{
	char message[50];
	printf("type out a message:");
	scanf("%[^\n]s",message);
	printf("the given message is %s",message);
}