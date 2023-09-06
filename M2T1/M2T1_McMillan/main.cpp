#include <iostream>
#include <iomanip>

using namespace std;
/*
CSC 134
M2T1 - Receipt Calculator
mcmillant
9/6/23
This program should take the price of a meal, which is $5.99, and print out a simple text receipt.
It should include:
-The price before tax
-The amount of tax owed (8%)
-The total including tax
*/

int main()
{

    cout << "Receipt Calculator" << endl;
    // TODO: Ask the user the meal price

    // declare variables
    double menu_price = 5.99;
    double tax_percent = 0.07; //Cumberland County
    double tax_dollars = menu_price * tax_percent; // amount in dollars
    double total_price = menu_price + tax_dollars; // price including tax

    // tax in $ is menu price times tax pct
    // then add the tax in $ to get the total $

    // TODO: to use 2 decimal places on school computer version add #iomanip at the top
    cout << fixed << setprecision(2);

    // print the receipt
    cout << "Menu price: $" << menu_price << endl;
    cout << "Tax is :    $" << tax_dollars << endl;
    cout << "_________________________" << endl;
    cout << "Your Total: $ " << total_price << endl;
    cout << "Thank you for dining with us!" << endl;



    return 0;
}
