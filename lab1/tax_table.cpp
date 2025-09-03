#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    float first_price;
    float last_price;
    float stride;
    float tax_percent;

    float price;
    float tax;
    float price_with_tax;

    cout << "Enter first price: " << flush;
    cin >> first_price;
    cout << "Enter last price : " << flush;
    cin >> last_price;
    cout << "Enter stride     : " << flush;
    cin >> stride;
    cout << "Enter tax percent: " << flush;
    cin >> tax_percent;

    // Col width: 12 17 20
    // 49 char sep of -
    cout << "\nTAX TABLE\n=========" << endl;
    cout << setw(12) << "Price" << setw(17) << "Tax" << setw(20) << "Price with tax" << endl;
    cout << string(49, '-') << endl;

    cout << fixed << setprecision(2);
    for (float i = 0; i <= (last_price - first_price) / stride; i++)
    {
        price = first_price + i * stride;
        tax = price * (tax_percent / 100);
        price_with_tax = price + tax;

        cout << setw(12) << price << setw(17) << tax << setw(20) << price_with_tax << endl;
    }
    cout << endl;
}
