#include<iostream>
#include"Account.h"

using namespace std;
int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    <<account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    

