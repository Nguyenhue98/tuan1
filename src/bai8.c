#include <stdio.h>
#include<string.h>
#include <stdlib.h>
// đảo xâu
char *daoxau(char *s)
{
	char *tmp, i;
	i = 0;
	tmp = (char *)malloc(strlen(s) + 1);
	while (i<strlen(s))
		*(tmp + i) = *(s + strlen(s) - i++ - 1);
	*(tmp + i) = 0;
	return tmp;
}
int main() {
	char s1[100];   
	printf("Nhap xau: \n");
	gets(s1);
	printf("Xau sau khi dao nguoc la:\n");
	printf("\"%s\"", daoxau(s1));
	getchar();
}
