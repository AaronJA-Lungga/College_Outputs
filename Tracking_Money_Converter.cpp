/*
Name: Arias, Aaron Jay C.
Year/Semester: 1st/2nd
Project: Tracking Money Converter
*/

#include<iostream>                                      //Header Files
#include<iomanip>
using namespace std;

class Converter {                                       //A class in C++ is the building block that leads to Object-Oriented programming.
                           
    public:                                             //Public is an Access Specifier
        double fil1, for2;                              //Data Members
        double PHP_res1, PHP_res2, PHP_res3, PHP_res4 ,PHP_res5;
        double PHP_res;
        char name[5];
        int sel;
        int acc_num;
        double PHP_JPY();                               //Member Functions
        double PHP_KRW();
        double PHP_CNY();
        double PHP_IDR();
        double PHP_USD();
        void Currencies();
        void get_rec();
        void options();
        void show_rec();
        int depo();
        int ret_tran();
        int ret_acc();
};

void Converter::options() {
    cout << "\nBank System\n" << endl;
    cout << "Choose from the options below\n" << endl;
    cout << "1. CREATE ACCOUNT" << endl;
    cout << "2. SHOW DETAILS" << endl;
    cout << "3. DEPOSIT" << endl;
    cout << "4. MONEY CHANGER" << endl;
    cout << "0. EXIT\n" << endl;

}

void Converter::get_rec() {
    cout << "Enter Name: " << endl;
    cin >> name;
    cout << "Enter Account Number: " << endl;
    cin >> acc_num;
    cout << "Enter Initial Deposit: PHP ";
    cin >> PHP_res;
}

int Converter::ret_tran() {
    return(PHP_res);
}

int Converter::ret_acc() {
    return(acc_num);
}

void Converter::show_rec() {
    cout << "Account No: " << acc_num << endl;
    cout << "Name:       " << name << endl;
    cout << "Amount:     " << PHP_res << endl;
}

int Converter::depo() {
    int dep;
    cout << "Enter the ammount to be deposit: " << endl;
    cin >> dep;
    PHP_res = PHP_res + dep;
    return PHP_res;
}

void Converter::Currencies() {

    cout << "\nPick Currency\n" << endl;
    cout << "1. PHP & JPY" << endl;
    cout << "2. PHP & KRW" << endl;
    cout << "3. PHP & CNY" << endl;
    cout << "4. PHP & IDR" << endl;
    cout << "5. PHP & USD\n" << endl;
}

double Converter::PHP_JPY() {
    double PHP = 0.41;
    double JPY = 2.43;
    double JPY_res;
    
    cout << "1. PHP - JPY" << endl;
    cout << "2. JPY - PHP" << endl;
    cout << "Select currency to convert: " << endl;
    cin >> sel;
    
    if(sel == 1) {
        cout << "PHP - JPY Conversion" << endl;
        cin >> fil1;
        if(fil1 <= PHP_res) {
            JPY_res = fil1 * JPY;
            cout << "Converted to JPY = " << setprecision(2) << fixed << JPY_res << endl;
            PHP_res = PHP_res - fil1;
            cout << "PHP Remaining Balance: PHP " << PHP_res << endl;
        }
        else {
            cout << "Insufficient Money" << endl;
        }
    }
    if(sel == 2) {
        cout << "JPY - PHP Conversion" << endl;
        cin >> for2;
        PHP_res1 = for2 * PHP;
        cout << "Converted to PHP = " << setprecision(2) << fixed << PHP_res1 << endl;
        PHP_res = PHP_res + PHP_res1;
        cout << "PHP Total Balance: PHP " << PHP_res << endl;
    }
    return PHP_res;
}

double Converter::PHP_KRW() {
    double PHP = 0.043;
    double KRW = 23.37;
    double KRW_res;

    cout << "1. PHP - KRW" << endl;
    cout << "2. KRW - PHP" << endl;
    cout << "Select currency to convert: " << endl;
    cin >> sel;
    
    if(sel == 1) {
        cout << "PHP - KRW Conversion" << endl;
        cin >> fil1;
        if(fil1 <= PHP_res) {
            KRW_res = fil1 * KRW;
            cout << "Converted to KRW = " << setprecision(2) << fixed << KRW_res << endl;
            PHP_res = PHP_res - fil1;
            cout << "PHP Remaining Balance: PHP " << PHP_res << endl;
        }
        else {
            cout << "Insufficient Money" << endl;
        }
    }
    if(sel == 2) {
        cout << "KRW - PHP Conversion" << endl;
        cin >> for2;
        PHP_res2 = for2 * PHP;
        cout << "Converted to PHP = " << setprecision(2) << fixed << PHP_res2 << endl;
        PHP_res = PHP_res + PHP_res2;
        cout << "PHP Total Balance: PHP " << PHP_res << endl;
    }
    return PHP_res;
}

double Converter::PHP_CNY() {
    double PHP = 8.33;
    double CNY = 0.12;
    double CNY_res;

    cout << "1. PHP - CNY" << endl;
    cout << "2. CNY - PHP" << endl;
    cout << "Select currency to convert: " << endl;
    cin >> sel;
    
    if(sel == 1) {
        cout << "PHP - CNY Conversion" << endl;
        cin >> fil1;
        if(fil1 <= PHP_res) {
            CNY_res = fil1 * CNY;
            cout << "Converted to CNY = " << setprecision(2) << fixed << CNY_res << endl;
            PHP_res = PHP_res - fil1;
            cout << "PHP Remaining Balance: PHP " << PHP_res << endl;
        }
        else {
            cout << "Insufficient Money" << endl;
        }
    }
    if(sel == 2) {
        cout << "CNY - PHP Conversion" << endl;
        cin >> for2;
        PHP_res3 = for2 * PHP;
        cout << "Converted to PHP = " << setprecision(2) << fixed << PHP_res3 << endl;
        PHP_res = PHP_res + PHP_res3;
        cout << "PHP Total Balance: PHP " << PHP_res << endl;
    }
    return PHP_res;
}

double Converter::PHP_IDR() {
    double PHP = 0.0037;
    double IDR = 267.24;
    double IDR_res;

    cout << "1. PHP - IDR" << endl;
    cout << "2. IDR - PHP" << endl;
    cout << "Select currency to convert: " << endl;
    cin >> sel;
    
    if(sel == 1) {
        cout << "PHP - IDR Conversion" << endl;
        cin >> fil1;
        if(fil1 <= PHP_res) {
            IDR_res = fil1 * IDR;
            cout << "Converted to IDR = " << setprecision(2) << fixed << IDR_res << endl;
            PHP_res = PHP_res - fil1;
            cout << "PHP Remaining Balance: PHP " << PHP_res << endl;
        }
        else {
            cout << "Insufficient Money" << endl;
        }
    }
    if(sel == 2) {
        cout << "IDR - PHP Conversion" << endl;
        cin >> for2;
        PHP_res4 = for2 * PHP;
        cout << "Converted to PHP = " << setprecision(2) << fixed << PHP_res4 << endl;
        PHP_res = PHP_res + PHP_res4;
        cout << "PHP Total Balance: PHP " << PHP_res << endl;
    }
    return PHP_res;
}

double Converter::PHP_USD() {
    double PHP = 55.85;
    double USD = 0.018;
    double USD_res;

    cout << "1. PHP - USD" << endl;
    cout << "2. USD - PHP" << endl;
    cout << "Select currency to convert: " << endl;
    cin >> sel;
    
    if(sel == 1) {
        cout << "PHP - USD Conversion" << endl;
        cin >> fil1;
        if(fil1 <= PHP_res) {
            USD_res = fil1 * USD;
            cout << "Converted to USD = " << setprecision(2) << fixed << USD_res << endl;
            PHP_res = PHP_res - fil1;
            cout << "PHP Remaining Balance: PHP " << PHP_res << endl;
        }
        else {
            cout << "Insufficient Money" << endl;
        }
    }
    if(sel == 2) {
        cout << "USD - PHP Conversion" << endl;
        cin >> for2;
        PHP_res5 = for2 * PHP;
        cout << "Converted to PHP = " << setprecision(2) << fixed << PHP_res5 << endl;
        PHP_res = PHP_res + PHP_res5;
        cout << "PHP Total Balance: PHP " << PHP_res << endl;
    }  
    return PHP_res;
}

int main() {

    Converter x[1];
    int pick, count;

start: Converter A;
    A.options();

    cout << "Choose Options" << endl;
    cin >> pick;
    switch (pick) {
        case 1: {
            cout << "\nPick account number: " << endl;
            cin >> count;
            x[count].get_rec();
                    cout << endl;
                    cout << "Account Created Successfully" << endl;
                    goto start;
                    break;
        }
        case 2: {
            cout << "\nEnter the Account No: " << endl;
                    cin >> count;
                    if(count==x[count].ret_acc()) {
                        cout << "Account Details" << endl;
                        x[count].show_rec();
                        }
                        goto start;
                        break;
        }
        case 3: {
            cout << "\nEnter the Account No: " << endl;
            cin >> count;
            if(count==x[count].ret_acc()) {
                x[count].depo();
                cout << "Amount Successfully Deposit" << endl;
            }
            goto start;
            break;
        }
        case 4: {
            cout << "\nEnter the account No: " << endl;
                cin >> count;
                if(count==x[count].ret_acc()) {
                    x[count].Currencies();
                    }
            cout << "Pick Currency" << endl;
            cin >> pick;
            cout << endl;
            if(pick == 1) {
                x[count].PHP_JPY();
                goto start;
            }
            else if(pick == 2) {
                x[count].PHP_KRW();
                goto start;
                }
            else if(pick == 3) {
                x[count].PHP_CNY();
                goto start;
            }
            else if(pick == 4) {
                x[count].PHP_IDR();
                goto start;
            }
            else if(pick == 5) {
                x[count].PHP_USD();
                goto start;
            }
            else {
                cout << "Can't convert this kind of currency" << endl;
            }
            break;
        }
    }
return 0;
}