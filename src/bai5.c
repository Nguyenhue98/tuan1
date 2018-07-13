#include <stdio.h>
#include <stdlib.h>
//nhập ngày tháng năm-kiểm tra
//kiem tra ngay
int Date(int d1, int m1, int y1)
{
	int d;
	switch (m1)
	{
	case 1: d = 31; break;
	case 3: d = 31; break;
	case 5: d = 31; break;
	case 7: d = 31; break;
	case 9: d = 31; break;
	case 11: d = 31; break;
	case 2:
	{
		if (y1 % 4 == 0) d = 29;
		else d = 28;
		break;
	}
	default:d = 30; break;
	}
	getchar();
	return d;
}
int main()
{
	int d, m, y;
	printf(" INPUT:");
	printf("\n Ngay:");
	scanf("%d", &d);
	printf("\n Thang:");
	scanf("%d", &m);
	printf("\n Nam:");
	scanf("%d", &y);
	if (m>12)
	{
		printf("\n Khong hop le!");
		getchar();
		return 0;
	
	}
	if (d>Date(d, m, y))
	{
		printf("\n Khong hop le!");
		getchar();
		return 0;
	}
	if (y % 4 == 0)
		printf("\n Ngay%d,Thang%d,Nam%d- NAM NHUAN", d, m, y);
	else         printf("\n Ngay%d,Thang%d,Nam%d ", d, m, y);
	getchar();

	return 0;
}
