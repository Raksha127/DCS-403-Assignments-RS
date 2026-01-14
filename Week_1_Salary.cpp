#include <iostream>
using namespace std;

int main() {
    int baseSalary;
    const double BONUS_PERCENTAGE = 15.0;

    cout << "Base Salary: ";
    cin >> baseSalary;

    double bonusAmount = baseSalary * (BONUS_PERCENTAGE / 100);
    double totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
