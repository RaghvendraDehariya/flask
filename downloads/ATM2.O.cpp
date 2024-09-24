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

    void Exit();

};

void ATM:: Exit() {

    cout << "card returned" << endl;

}

void ATM:: Deposit() {

    int ch;

    cout << "\ninsert amount " <<endl<<endl;

    cin>>deposit;

    balance=balance + deposit;
    
    cout << "Deposit successful\n" << endl;

    cout<<"\nIf you want to go back press 4 or 5 to Exit"<<endl;

    cin>>ch;

    if(ch==4) {

        Back();

    }

}

void ATM:: Withdraw() {

    int ch;

    cout << " \ninsert amount " <<endl<<endl;

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

    cout << "3. BALANCE\t\t\t4. BACK" << endl;

    cout << "\t\t5. EXIT" << endl;

    cin>>ch;

    do {

        switch(ch) {

        case 1:

            Deposit();
            break;

        case 2:

            Withdraw();
            break;


        case 3:

            Display();
            break;


        case 4:

            Back();
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

void retry() {

    ATM A;

    int pin;

    cout << "\t\t Enter Pin" << endl;

    cin>>pin;

    if(pin==9583) {

        A.Back();

    }

    else {

        cout << "\t\tincorrect Pin\n" << endl;

        cout << "\t\ttry again \n" << endl;

        retry();

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

        if(pin==9583) {

            A.Back();

        }

        else {

            cout << "\t\tincorrect Pin\n" << endl;

            cout << "\t\ttry again \n" << endl;

            retry();

        }

    }

    else {

        cout << "card is not inserted\n" << endl;

    }
    
    A.Exit();


    return 0;
}
