#include <stdio.h>
typedef struct bank {
	char num[20];
	char name[20];
	int balance;
}BANK;

void getWithdraw(BANK* b, int amount)//���
{
	b->balance -= amount;
}

void getDeposit(BANK* b, int amount) //�Ա�
{
	b->balance += amount;
}

void getBalance(BANK* b)//�ܾ���ȸ
{
	printf("���� �ܾ�: %d\n", b->balance);
}

int main() {
	BANK b = { "100", "hong gil dong", 0 };//���¹�ȣ, �̸�, �ܾ�
	//��ȭ: ����ü�迭�� ����
	/*
	BANK b[5] = {{"100", "aaa", 0} ......}
	*/
	BANK* p;//����ü ������ ���� ����
	p = &b; //����ü �����Ϳ� ����ü ������ �ּ� �Ҵ�

	int amount, select;

	while (1) {
		printf("select menu : 1)�Ա�, 2) ���, 3) �ܾ���ȸ, 4) ����");
		scanf("%d", select);
		if (select == 1) {
			printf("input money: ");
			scanf("%d", amount);
			getbalance(p);
			continue;
		}
		else if (select == 2) {
			printf("output money : ");
			scanf("%d", amount);
			if (amount > b->balance) {
				printf("�ܾ׺���/n");
				continue;
			}
			else {
				getWithdraw(p, amount);
				continue;
			}
		}
		else if (select == 3)
			getbalance(p);
		else if (select == 4)
			exit(0);
	}
}