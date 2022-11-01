// Task 2

// Write a program that calculates how much money you’ll end up with if you invest an amount of money 
// at a fixed interest rate, compounded monthly. 


#include <iostream>
using namespace std;

int main () {
    unsigned long amount;
    int month;
    float interest;
    
    cout << "Enter the initial amount: "; cin>> amount;
    cout << "Enter the number of months: "; cin >> month;
    cout << "Enter the interest rate: "; cin >> interest;

    unsigned long total = amount;
    float rate = interest / 100;

    for (int i=0; i<month; i++) {
        total = total + ( total * rate );
    }

    cout << "At the end of " << month << " months, you saved " << total << "MMK" << endl; 

    return 0;
}