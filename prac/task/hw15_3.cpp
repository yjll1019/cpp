/*
파일명 : hw15_3.cpp
작성자 : 이예지
작성일 : 2018년 6월 5일
내 용 : 예외 클래스와 예외 발생, 예외 처리를 연습한다.
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

class AccountException {
public:
	virtual void ShowExceptionReason() = 0;
};

class NegativeBalanceException : public AccountException {
private: int reqBalance;
public:
	NegativeBalanceException(int balance) : reqBalance(balance) {}
	void ShowExceptionReason() {
		cout << "[예외 메시지: " << reqBalance << "는 현재 잔액보다 큽니다.]" << endl;
	}
};

class ExceedLimitException : public AccountException {
private: int reqLimit;
public:
	ExceedLimitException(int limit) : reqLimit(limit) {}
	void ShowExceptionReason() {
		cout << "[예외 메시지: " << reqLimit << "는 일회출금한도를 초과합니다.]" << endl;
	}
};

class WrongAmmountException : public AccountException {
private: int reqMoney;
public:
	WrongAmmountException(int money) : reqMoney(money) {}
	void ShowExceptionReason() {
		cout << "[예외 메시지: " << reqMoney << "는 입/출금불가합니다.]" << endl;
	}
};

class BankAccount {
private: int balance; //잔액
		 int limit; //일회 출금 한도
		 int add;
		 int sub;
public:
	BankAccount(int userLimit) { //생성자
		balance = 0;
		limit = userLimit;//일회출금한도
		add = 0;
		sub = 0;
	}

	void deposit(int money) throw (WrongAmmountException) { //입금을 위한 멤버함수
		if (money < 0) { //음수 입력 시 
			WrongAmmountException expn(money);
			throw expn;
		}
		balance += money;
		add += money;
	}

	void withdraw(int money) throw (WrongAmmountException, NegativeBalanceException, ExceedLimitException) {//출금을 위한 멤버함수
		if (money < 0) {  //음수 입력 시 
			throw WrongAmmountException(money);
		}
		if (money > balance) { // 현재 잔액보다 출금하려는 금액이 더 많을 때
			throw NegativeBalanceException(money);
		}
		if (money > limit) { //일회 출금 한도 이상일 때
			throw ExceedLimitException(money);
		}
		balance -= money;
		sub += money;
	}

	void showMyMoney() {
		cout << "잔고: " << balance << endl << endl;
	}

	void addSubTotal() {
		cout << "입금 총액은 : " << add << ", 출금 총액은 : " << sub << " 입니다." << endl;
	}
};



int main() {
	cout << "hw15_3 : 이예지" << endl;

	BankAccount myAcc(100); 

	int x = 0;
	int money = 0;
	while (true) {
		cout << "1:입금 2:출금 3:잔액조회 4:종료" << endl;
		cin >> x;
		if (x == 4) {
			myAcc.addSubTotal();
			break;
		}
		switch (x) {
		case 1: cout << "입금할 금액을 입력해주세요." << endl;
			try {
				cin >> money;
				myAcc.deposit(money);
			}
			catch (WrongAmmountException &expn) {
				expn.ShowExceptionReason();
			}
			break;
		case 2: cout << "출금할 금액을 입력해주세요." << endl;
			try {
				cin >> money;
				myAcc.withdraw(money);
			}
			catch (AccountException &expn) {
				expn.ShowExceptionReason();
			}
			break;
		case 3: cout << "잔액 조회를 시작합니다." << endl;
			myAcc.showMyMoney();
			break;
		case 4: cout << "프로그램을 종료합니다." << endl;
			myAcc.showMyMoney();
			break;
		default: cout << "잘못된 번호입니다. 다시 입력해주세요." << endl;
			break;
		}
	}

	return 0;
}