#include <stdio.h>
#include <stdlib.h>
// viết chương trình nhập vào số có 3 chữ số. in ra màn hình các chũ số theo thứ tự giảm dần
int main()
{
	int n, i, a[100], b, m;
	printf("\n nhap so chu so:");
	scanf("%d", &m);
	printf("\n Input:");
	scanf("%d", &n);
	i = 0;
	int j = 0;
	while (n != 0)
	{
		j++;
		a[i] = n % 10;
		n = n / 10;
		// printf("%3d",a[i]);
		i++;

	}
	if (j != m)
	{
		printf("\nnhap sai!");
		getchar();
		return 0;
	}
	for (i = 0; i<m; i++)
		for (i = 0; i<m; i++)
		{
			for (j = i + 1; j<m; j++)
			{
				if (a[i]<a[j])
				{
					b = a[i];
					a[i] = a[j];
					a[j] = b;
				}
			}
		}
	printf("\n Output:");
	for (i = 0; i<m; i++)
	{
		printf("%d", a[i]);
	}
	getchar();
	getchar();
	return 0;
}
