#include <iostream>
using namespace std;

int main() {
    int initial_balance;
    int deposit_amount;
    int withdrawal_amount;
    int balance_after_deposit;
    int balance_after_withdrawal;

    cout << "Enter the initial balance: ";
    cin >> initial_balance;

    cout << "Enter the deposit amount: ";
    cin >> deposit_amount;

    cout << "Enter the withdrawal amount: ";
    cin >> withdrawal_amount;

    balance_after_deposit = initial_balance + deposit_amount;
    balance_after_withdrawal = balance_after_deposit - withdrawal_amount;

    if (withdrawal_amount > balance_after_deposit) {
        cout << "Insufficient funds for withdrawal.\n";
        balance_after_withdrawal = balance_after_deposit;
    }

    cout << "Balance after deposit: " << balance_after_deposit << "\n";
    cout << "Balance after withdrawal: " << balance_after_withdrawal << "\n";

    return 0;
}