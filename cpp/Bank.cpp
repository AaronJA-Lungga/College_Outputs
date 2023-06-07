#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Bank {

    private:
        int amount, acc_num;
        char name[20];
        char acc_type;
    public:
        void options();
        void get_rec();
        friend void show_rec(Bank);
        int ret_amo();
        int ret_acc();
        int depo();
        int wdraw();
};

void Bank::options() {
    int pick;
    cout << "Bank System" << endl;
    cout << "Choose from the options below" << endl;
    cout << "1. CREATE ACCOUNT" << endl;
	cout << "2. DEPOSIT" << endl;
	cout << "3. WITHDRAW" << endl;
	cout << "4. DISPLAY ALL ACCOUNT" << endl;
	cout << "5. SEARCH" << endl;
	cout << "0. EXIT" << endl;
}

void Bank::get_rec() {
    cout << "Enter Name: " << endl;
    cin >> name;
    cout << "Enter Account Number: " << endl;
    cin >> acc_num;
    cout << "Enter Account Type: " << endl;
    cin >> acc_type;
    cout << "Enter Initial Deposit: PHP ";
    cin >> amount;
}

int Bank::ret_amo() {
    return(amount);
}

void show_rec(Bank obj) {
    cout << "Account No : " << obj.acc_num << endl;
    cout << "Name : " << obj.name << endl;
    cout << "Account Type : " << obj.acc_type << endl;
    cout << "Amount : " << obj.amount << endl;
}

int Bank::ret_acc() {
    return(acc_num);
}

int Bank::depo() {
    int dep;
    cout << "Enter the ammount to be deposit: " << endl;
    cin >> dep;
    amount = amount + dep;
    return amount;
}

int Bank::wdraw() {
    int w;
    if(amount < 500) {
        cout << endl;
        cout << "Sorry! Insuficient Balance transection not available" << endl;
    }
    else {
        cout << "Enter the ammount to be withdraw: " << endl;
        cin >> w;
        amount = amount - w;
        cout << "amount successfully withdraw" << endl;
    }
    return amount;
}

int main () {

    Bank x[5];
    int pick, count, account, amount, cust;
    
    do {
        start:
            Bank A;
            A.options();

            cout << endl;
            cout << "Enter Your Choice: " << endl;
          
            cin >> pick;
            switch(pick) {
                case 1: {
                    cout << "How Many Customer Record you want to Store: " << endl;
                    cin >> cust;
                for(count = 0; count < cust; count++) {
                    cout << count+1 << "ST " << "ACCOUNT" << endl;
                    x[count].get_rec();
                    cout << endl;
                    cout << "Account Created Successfully" << endl;
                    }
                        break;
                }
                case 2: {
                    cout << "Enter the Account No: " << endl;
                    cin >> account;
                    for(count = 0; count < cust; count++) {
                        if(account==x[count].ret_acc()) {
                        x[count].depo();
                        cout << "Amount Successfully Deposit" << endl;
                        }
                    }
                        break;
                }
                case 3: {
                    cout << "Enter the account No: " << endl;
                    cin >> account;
                    for(count = 0; count < cust; count++) {
                        if(account==x[count].ret_acc()) {
                            x[count].wdraw();
                        }
                    }
                        break;
                }
                case 4: {
                    cout << "ALL ACCOUNT DISPLAY:" << endl;
                    cout << "==================================n" << endl;
                    for(count = 0;count < cust; count++) {
                        if(x[count].ret_acc()==0)
                        cout << count+1 << "ST " << "ACCOUNT" << endl;
                        cout << "--------------------------------------n" << endl;
                        show_rec(x[count]);
                        cout << "=====================================n" << endl;
                    }
                        break;
                }
                case 5: {
                    int search;
                    cout << "Enter account No. to be search: " << endl;
                    cin >> search;
                    for(count = 0; count < cust; count++) {
                        if(search==x[count].ret_acc()) {
                            cout << endl << count+1 << "ST " << "ACCOUNT" << endl;
                        show_rec(x[count]);
                        }
                    }
                        break;
                }
                case 0: {
                    exit(0);
                        break;
                }
                default: {
                    cout << "Invalid Choice" << endl;
                    goto start;
                }
            }
    }
        while(pick !=0);        
}


/*
int main(void) {

    int Pick;

a:  cout << "1. Banking";
    cout << "2. Money Changer";
    cout << "Please pick the correct number for your transaction";
    cin >> Pick;

    switch(Pick) {
        case 1:
            cout << "You choose Banking";
            goto b;
            break;
        case 2:
            cout << "You choose Money Changer";
            goto c;
        default:
            cout << "Invalid Number!"

    }

b:  cout << "Banking";

}*/