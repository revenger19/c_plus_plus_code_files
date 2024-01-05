/*

Write the code:
Sales = 95000
State tax = 4%
County tax = 2%

*/

#include <iostream>
using namespace std;

int main() {
    int sales = 95000;
    int state_tax = 4;
    int county_tax = 2;
    double after_sales_tax = sales - (sales*(state_tax/100.0));
    double after_county_tax = after_sales_tax - (after_sales_tax*(county_tax/100.0));

    cout << "Total sales = $" << sales << endl 
         << "State Tax = " << 4 << "%" << endl
         << "County Tax = " << 2 << "%" << endl
         << "Sales after state tax = $" << after_sales_tax << endl
         << "Sales after state and county tax = $" << after_county_tax; 
    return 0;
}