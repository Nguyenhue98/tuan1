#include <stdio.h>
#include <stdlib.h>
//tìm UCLN,BSCNN
int UCLN(int m, int n)
{
	while (m != 0 && n != 0)
	{
		if (n>m)
			n = n - m;
		else m = m - n;
	}
	if (n == 0)
		return m;
	else return n;
}
int BSCNN(int a, int b)
{
	int c;
	c = a*b / UCLN(a, b);
	return c;
}
int main()
{
	int m, n;
	printf("\n Nhap n:");
	scanf("%d", &n);
	printf("\n Nhap m:");
	scanf("%d", &m);
	printf("\n UCLN(%d,%d)=%d", m, n, UCLN(m, n));
	printf("\n BSCNN(%d,%d)=%d", m, n, BSCNN(m, n));
	getchar();
	getchar();
	return 0;
}
