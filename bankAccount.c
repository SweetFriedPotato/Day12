#include <stdio.h>
typedef struct bank {
	char num[20];
	char name[20];
	int balance;
}BANK;

void getWithdraw(BANK* b, int amount)//출금
{
	b->balance -= amount;
}

void getDeposit(BANK* b, int amount) //입금
{
	b->balance += amount;
}

void getBalance(BANK* b)//잔액조회
{
	printf("현재 잔액: %d\n", b->balance);
}

int main() {
	BANK b = { "100", "hong gil dong", 0 };//계좌번호, 이름, 잔액
	//심화: 구조체배열로 변경
	/*
	BANK b[5] = {{"100", "aaa", 0} ......}
	*/
	BANK* p;//구조체 포인터 변수 선언
	p = &b; //구조체 포인터에 구조체 변수의 주소 할당

	int amount, select;

	while (1) {
		printf("select menu : 1)입금, 2) 출금, 3) 잔액조회, 4) 종료");
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
				printf("잔액부족/n");
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