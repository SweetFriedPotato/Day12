#include<stdio.h>
#define MAX_SIZE 100
int main() {
	FILE* fp = NULL;
	char str[MAX_SIZE];
	fp = fopen("2002.txt", "r");
	if (fp == NULL)
		printf("���� ���� ����\n");
	while (!feof(fp)) {
		fgets(str, MAX_SIZE, fp);
		fputs(str, stdout);
	}
	fclose(fp);
}