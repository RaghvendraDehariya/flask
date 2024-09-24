#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class ATM {

	private:

		int balance=10000;
		int deposit=0;
		int withdraw=0;

	public:

		void Display();

		void Back();

		void Deposit();

		void Withdraw();

		void Transfer();

		void Exit();

		void money();

		void money2();

		void money3();


};

void ATM:: Exit() {

	cout << "card returned" << endl;

}

void ATM:: Deposit() {

	int ch;

	cout << "\nINSERT AMOUNT" <<endl<<endl;

	cin>>deposit;

	balance=balance + deposit;

	cout << "Deposit successful\n" << endl;

	cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

	cin>>ch;

	if(ch==4) {

		Back();

	}

}

void ATM:: money() {

	int ch,c;

	cout<<"\t\tSELECT AMOUNT\n"<<endl;

	cout << "1. 500  \t\t\t 2. 1000\n" << endl;
	cout << "3. 2000 \t\t\t 4. 3000\n" << endl;
	cout << "5. 4000 \t\t\t 6. 5000\n" << endl;
	cout << "\t\t7.INSERT AMOUNT " << endl;

	cin >> ch;

	switch(ch) {

		case 1:

			balance=balance-500;

			cout << "Withdraw successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}

			break;

		case 2:

			balance=balance-1000;

			cout << "Withdraw successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 3:

			balance=balance-2000;

			cout << "Withdraw successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 4:

			balance=balance-3000;

			cout << "Withdraw successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 5:

			balance=balance-4000;

			cout << "Withdraw successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 6:

			balance=balance-5000;

			cout << "Withdraw successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 7:

			Withdraw();

			break;

	}


}


void ATM:: money2() {

	int ch,c;

	cout<<"\t\tSELECT AMOUNT\n"<<endl;

	cout << "1. 500  \t\t\t 2. 1000\n" << endl;
	cout << "3. 2000 \t\t\t 4. 3000\n" << endl;
	cout << "5. 4000 \t\t\t 6. 5000\n" << endl;
	cout << "\t\t7.INSERT AMOUNT " << endl;

	cin >> ch;

	switch(ch) {

		case 1:

			balance=balance+500;

			cout << "Deposit successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}

			break;

		case 2:

			balance=balance+1000;

			cout << "Deposit successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 3:

			balance=balance+2000;

			cout << "Deposit successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 4:

			balance=balance+3000;

			cout << "Deposit successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 5:

			balance=balance+4000;

			cout << "Deposit successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 6:

			balance=balance+5000;

			cout << "Deposit successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 7:

			Deposit();

			break;

	}


}


void ATM:: money3() {

	int ch,c;

	cout<<"\t\tSELECT AMOUNT\n"<<endl;

	cout << "1. 500  \t\t\t 2. 1000\n" << endl;
	cout << "3. 2000 \t\t\t 4. 3000\n" << endl;
	cout << "5. 4000 \t\t\t 6. 5000\n" << endl;
	cout << "\t\t7.INSERT AMOUNT " << endl;

	cin >> ch;

	switch(ch) {

		case 1:

			balance=balance-500;

			cout << "Transfer successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}

			break;

		case 2:

			balance=balance-1000;

			cout << "Transfer successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 3:

			balance=balance-2000;

			cout << "Transfer successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 4:

			balance=balance-3000;

			cout << "Transfer successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 5:

			balance=balance-4000;

			cout << "Transfer successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 6:

			balance=balance-5000;

			cout << "Transfer successful" << endl;

			cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

			cin>>c;

			if(c==4) {

				Back();

			}


			break;

		case 7:

			Transfer();

			break;

	}


}


void ATM::Transfer() {
	int ch;

	cout << " \nINSERT AMOUNT " <<endl<<endl;

	cin>>withdraw;

	if(balance>=withdraw) {

		balance=balance - withdraw;

		cout << "Your Money is Transfer successfully\n" << endl;

	}

	else {

		cout << "\nnot sufficient balance" << endl;

	}

	cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

	cin>>ch;

	if(ch==4) {

		Back();

	}


}

void ATM:: Withdraw() {

	int ch;

	cout << " \nINSERT AMOUNT " <<endl<<endl;

	cin>>withdraw;

	if(balance>=withdraw) {

		balance=balance - withdraw;

		cout << "collect your money \n" << endl;

		cout << "\nWithdraw successful" << endl;

	}

	else {

		cout << "\nnot sufficient balance" << endl;

	}

	cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

	cin>>ch;

	if(ch==4) {

		Back();

	}

}

void ATM:: Back() {

	int ch;

	cout << "\n\t     SELECT TRANSACTION\n\n" << endl;

	cout << "1. DEPOSIT\t\t\t2. WITHDRAW" << endl;

	cout << "3. BALANCE\t\t\t4. TRANSFER" << endl;

	cout << "\t\t5. EXIT" << endl;

	cin>>ch;

	do {

		switch(ch) {

			case 1:

				money2();
				break;

			case 2:

				money();
				break;


			case 3:

				Display();
				break;


			case 4:

				money3();
				break;


			case 5:

				break;

		}

	} while(ch>5);


}


void ATM:: Display() {

	int ch;

	cout << "\t     current balance is \n\t\t  "<<balance << endl;

	cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

	cin>>ch;

	if(ch==4) {

		Back();

	}
}

int main()
{
	ATM A;

	int pin,card;

	cout << "\t\tinsert card" << endl<<endl;

	cin >> card;

	if(card==1) {

		cout << "\t     Card is inserted" << endl;

		cout << "\t\t Enter Pin" << endl;

		cin>>pin;

		if(pin==2024) {

			A.Back();

		}

		else {

			cout << "\t\tincorrect Pin\n" << endl;

			//cout << "\t\ttry again \n" << endl;

			A.Exit();

		}

	}

	else {

		cout << "card is not inserted\n" << endl;

		A.Exit();
	}



	return 0;
}
