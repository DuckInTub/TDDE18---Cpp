#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char c;
    int i;
    double d;
    string s;


    cout << "Enter one integer: " << flush;
    cin >> i;
    cout << "You entered the number: " << i << endl;
    cin.ignore(1000, '\n');

    cout << "Enter four integers: " << flush;
    cin >> i;
    cout << "You entered the numbers: " << i << " ";
    cin >> i;
    cout << i << " ";
    cin >> i;
    cout << i << " ";
    cin >> i;
    cout << i << endl;

    cout << "Enter one integer and one real number: " << flush;
    cin >> i;
    cin >> d;
    cout << "The real is: " << setw(8) << fixed << setprecision(3) << d << endl;
    cout << "The integer is: " << setw(7) << i << endl;
    cin.ignore(1000, '\n');

    cout << "Enter one real and one integer number: " << flush;
    cin >> d;
    cin >> i;
    cout << "The real is: " << setfill('.') << setw(11) << fixed << setprecision(3) << d << endl;
    cout << "The integer is: " << setfill('.') << setw(8) << i << endl;
    cin.ignore(1000, '\n');

    cout << "Enter a character: " << flush;
    cin >> c;
    cout << "You entered: " << c << endl;
    cin.ignore(1000, '\n');

    cout << "Enter a word: " << flush;
    cin >> s;
    cout << "The word '" << s << "' has " << s.size() << " character(s)." << endl;
    cin.ignore(1000, '\n');

    cout << "Enter an integer and a word: " << flush;
    cin >> i;
    cin >> s;
    cout << "You entered '" << i << "' and '" << s << "'." << endl;
    cin.ignore(1000, '\n');

    cout << "Enter an character and a word: " << flush;
    cin >> c;
    cin >> s;
    cout << "You entered the string \"" << s << "\" and the character '" << c << "'." << endl;
    cin.ignore(1000, '\n');

    cout << "Enter a word and real number: " << flush;
    cin >> s;
    cin >> d;
    cout << "You entered \"" << s << "\" and \"" << fixed << setprecision(3) << d << "\"." << endl;
    cin.ignore(1000, '\n');

    cout << "Enter a text-line: " << flush;
    getline(cin, s);
    cout << "You entered: \"" << s << "\"" << endl;

    cout << "Enter a second line of text: " << flush;
    getline(cin, s);
    cout << "You entered: \"" << s << "\"" << endl;

    cout << "Enter three words: " << flush;
    cin >> s;
    cout << "You entered: '" << s << " ";
    cin >> s;
    cout << s << " ";
    cin >> s;
    cout << s << "'" << endl;

}
