#include <stdio.h>
int main() {
	FILE* fp = NULL;
	fp = fopen("sample1.txt", "w");
	if (fp = NULL)
		printf("파일 쓰기 실패\n");
	else
		printf("파일 쓰기 성공\n");
	fclose(fp);
}