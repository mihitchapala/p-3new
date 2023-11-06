#include<iostream>

class Account {
public:
    int acc_no;
    double balance;
    int branch_code;
    Account(int acc, double bal, int branch) {
        acc_no = acc;
        balance = bal;
        branch_code = branch;
    }
};

int main() {
    Account myAccount(12345, 1000.0, 567);
    std::cout << "Account Number: " << myAccount.acc_no << std::endl;
    std::cout << "Balance: $" << myAccount.balance << std::endl;
    std::cout << "Branch Code: " << myAccount.branch_code << std::endl;

    return 0;
}
