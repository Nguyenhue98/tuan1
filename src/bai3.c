#include <stdio.h>
#include <stdlib.h>
//tính tiền cước xe
int main()
{
	int n, m;
	int t1, t2, t3;
	printf(" Nhap quang duong(m):");
	scanf("%d", &n);
	if (n <= 1000)
	{
		t1 = 10000;
		printf(" Tong tien :%d", t1);

	}
	if (n>1000 && n <= 30000)


	{
		m = n - 1000;
		t2 = 10000 + m * 1500 / 200;
		printf(" Tong tien :%d", t2);
	}
	if (n>30000) {
		t3 = 10000 + 1500 / 200 * 29000 + (n - 30000) * 8000 / 1000;
		printf(" Tong tien :%d", t3);
	}


	getchar();
	getchar();
	return 0;
}
