//
//  main.cpp
//  CppWorkspace
//
//  Created by Tim on 11/13/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

float myround(float);

class BnkAccount {
    double interest;
    int time;
public:
//    BnkAccount();
//    BnkAccount(double);
//    ~BnkAccount();
    double balance;
    void set_interest(double);
    void set_time(int);
    double calc_bal();
};

//BnkAccount::BnkAccount(){
//    balance = 0.0;
//    interest = 0.0;
//    time = 0;
//};

//BnkAccount::BnkAccount(double Bal){
//    balance = Bal;
//};

//BnkAccount::~BnkAccount(){
//    delete interest;
//    delete time;
//    delete balance;
//};

void BnkAccount::set_interest(double setInt){
    interest = setInt;
};

void BnkAccount::set_time(int setTime){
    time = setTime;
};

double BnkAccount::calc_bal(){
    double bal;
    if (balance == 0 && interest == 0){
        bal = 0;
    }
    else {
    bal = ((myround(100*(balance + (balance*interest*time))))/100);
    }
    return bal;
}

int main() {
    BnkAccount account1;
    cout<<"Please enter an account balance: \n";
    double bal1;
    cin>>bal1;
    account1.balance = bal1;
    account1.set_interest(.055);
    account1.set_time(1);
    cout<<account1.calc_bal()<<endl;
    return 0;
}

float myround(float f){
    if (f >= 0x1.0p23) return f;
    return (float) (unsigned int) (f + 0.49999997f);
}