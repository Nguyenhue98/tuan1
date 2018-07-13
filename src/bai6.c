#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// chuẩn hóa xâu kí tự:
void main()
{
	int i; char s[255];

	printf("nhap xau:"); gets(s);
	fflush(stdin);
	// xóa kí tự trắng ở đầu câu
	while (s[0] == ' ')
		strcpy(&s[0], &s[1]);
	// xóa kí tự trắng ở cuối câu
	while (s[strlen(s) - 1] == ' ')
		strcpy(&s[strlen(s) - 1], &s[strlen(s)]);

	//xoá kí tự trắng thừa

	for (i = 0; i<strlen(s); i++)
		if ((s[i] == ' ') && (s[i + 1] == ' '))
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
	//không tồn tại hai dấu chấm,hai dấu phẩy
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ',') && (s[i + 1] == ','))
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
		if ((s[i] == '.') && (s[i + 1] == '.'))
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}

	}
	//trước dấu phẩy hoặc chấm không có dấu cách
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == ' '))

		{
			if (s[i + 1] == '.' || (s[i + 1] == ','))
			{
				strcpy(&s[i], &s[i + 1]);
				i--;
			}
		}

	}

	//sau dấu phẩy và dấu chấm là dấu cách
	/*for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == '.' || s[i] == ',')
		{
			if (s[i + 1] == ' ')

			
		}
	}*/
	printf("xau da chuan hoa : \"%s\"", s);

	getch();
}

