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


    while (true) 
    {
        cout << "Enter first price: " << flush;
        cin >> first_price;
        if (first_price >= 0) break;
        cerr << "First price must be at least zero SEK" << endl;
    }

    while (true) 
    {
        cout << "Enter last price : " << flush;
        cin >> last_price;
        if (last_price > first_price) break;
        cerr << "Last price must be greater than first price" << endl;
    }

    while (true)
    {
    cout << "Enter stride     : " << flush;
    cin >> stride;
        if (stride >= 0.01) break;
        cerr << "Stride must be at least 0.01" << endl;
    }

    while (true) 
    {
        cout << "Enter tax percent: " << flush;
        cin >> tax_percent;
        if (tax_percent >= 0) break;
        cerr << "Tax must be at least 0%" << endl;
    }


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
