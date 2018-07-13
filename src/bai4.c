#include <stdio.h>
#include <stdlib.h>
//vẽ tam giác cân
int main()
{
	int n, i, j;
	printf("nhap chieu cao tam giac:");
	scanf("%d", &n);
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");/*in ra màn hình khoảng trắng đến vị trí thứ n-i */
		for (j = 1; j <= 2 * i - 1; j++)
		{
			if (j == 1 || j <= 2 * i - 1)
				printf("*"); /*tiếp tục in ra màn hình * tại vị trí 1 và 2*i-1 */
			else
				printf(" ");
		}
		printf("\n"); /* chuyển xuống hàng tiếp theo */
		if (i == n - 1) /* đến hàng cuối cùng thì in ra cạnh đáy của tam giác*/
		{
			for (j = 1; j <= 2 * n - 1; j++)
				printf("*");
			break;

		}
	}
	getchar();
	getchar();
	return 0;
}
