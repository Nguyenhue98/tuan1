#include <stdio.h>
#include <conio.h>
#include <string.h>

// đếm in hoa, thường
int demkthoa(char s[])
{
	int i, dem = 0;
	for (i = 0; i<strlen(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			dem++;
	}
	return dem;
}
int demktthuong(char s[])
{
	int i, dem = 0;
	for (i = 0; i<strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			dem++;
	}
	return dem;
}
int main()
{
	char s[100];
	printf("nhap xau: ");
	gets(s);
	printf("so ki tu hoa la  :  %d\n", demkthoa(s));
	printf("so ki tu thuong la  :  %d", demktthuong(s));
	getchar();
}