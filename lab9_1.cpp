#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, rate, pay;

    cout << "Enter initial loan: ";
    cin >> loan;

    cout << "Enter interest rate per year (%): ";
    cin >> rate;

    cout << "Enter amount you can pay per year: ";
    cin >> pay;

    
    cout << left
         << setw(13) << "EndOfYear#"
         << setw(13) << "PrevBalance"
         << setw(13) << "Interest"
         << setw(13) << "Total"
         << setw(13) << "Payment"
         << setw(13) << "NewBalance"
         << endl;

    cout << fixed << setprecision(2);

    int year = 1;
    double prevBalance = loan;

    while (prevBalance > 0) {
        double interest = prevBalance * rate / 100.0;
        double total = prevBalance + interest;

        double payment;
        if (total <= pay)
            payment = total;      // ปีสุดท้าย
        else
            payment = pay;

        double newBalance = total - payment;

        cout << left
             << setw(13) << year
             << setw(13) << prevBalance
             << setw(13) << interest
             << setw(13) << total
             << setw(13) << payment
             << setw(13) << newBalance
             << endl;

        prevBalance = newBalance;
        year++;
    }

    return 0;
}
