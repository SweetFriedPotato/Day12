#include <stdio.h>
int main() {
	FILE* fp = NULL;
	fp = fopen("sample1.txt", "w");
	if (fp = NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");
	fclose(fp);
}