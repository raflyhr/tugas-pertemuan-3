#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "hitung sisi miring segitiga\n";
    cout << "  |\\\n";
    cout << "  | \\\n";
    cout << "  |  \\\n";
    cout << " a|   \\c\n";
    cout << "  |    \\\n";
    cout << "  |_____\\\n";
    cout << "     b    \n";

    cout << "masukkan sisi a :";
    cin >> a;
    cout << "masukkan sisi b :";
    cin >> b;
    c = sqrt(a * a + b * b);
    cout << "ini adalah sisi miring c :" << c;
    return 0;
}