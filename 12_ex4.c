#include<stdio.h>
#define MAX_SIZE 20
int main() {
	FILE* fp = NULL;
	char name[MAX_SIZE];
	int age;
	double score, sum = 0;
	fp = fopen("output.txt", "w");

	for (int i = 0; i < 5; i++) {
		printf("%d��° �л� ���� �Է�(�̸�, ����, ����): ", i + 1);
		scanf("%s %d %lf", name, &age, &score);
		fprintf(fp, "%10s %3d %3lf\n", name, age, score);
	}
	fclose(fp);
	fp = fopen("output.txt", "r");
	if (fp == NULL)
		printf("���� ���� ����\n");
	for (int i = 0; i < 5; i++) {
		fscanf(fp, "%s %d %lf", name, &age, &score);
		printf("%s %d %lf\n", name, age, score);
		sum += score;
	}
	printf("���� ��� : %.2f\n", sum / 5);
}