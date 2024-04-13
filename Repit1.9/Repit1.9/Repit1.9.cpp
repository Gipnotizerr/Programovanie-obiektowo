#include <iostream>
using namespace std;

class Account {
private:
    double balance; // Баланс счета

public:
    // Конструктор с установкой начального баланса
    Account(double initialBalance) {
        // Проверяем, что начальный баланс неотрицательный
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
            balance = 0;
        }
    }

    // Метод для добавления денег на счет
    void deposit(double amount) {
        // Проверяем, что сумма для депозита положительная
        if (amount > 0)
            balance += amount;
        else
            cout << "Deposit amount must be positive." << endl;
    }

    // Метод для снятия денег со счета
    void withdraw(double amount) {
        // Проверяем, что сумма для снятия не превышает баланс
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else if (amount <= 0)
            cout << "Withdrawal amount must be positive." << endl;
        else
            cout << "Insufficient funds. Cannot withdraw." << endl;
    }

    // Метод для получения текущего баланса
    double getBalance() {
        return balance;
    }
};

int main() {
    // Создаем счет с начальным балансом
    Account myAccount(1000.0);

    // Выводим начальный баланс
    cout << "Initial balance: " << myAccount.getBalance() << endl;

    // Пополняем счет
    myAccount.deposit(500.0);
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;

    // Снимаем деньги со счета
    myAccount.withdraw(200.0);
    cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

    // Пытаемся снять сумму больше, чем есть на счете
    myAccount.withdraw(2000.0);

    return 0;
}
