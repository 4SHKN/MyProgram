#include <iostream>
using namespace std;

int main() {
int a, b;

cout << "Enter two numbers: ";
cin >> a >> b;

if (a + b > 10) {
    cout << "M";
}
else if (a + b < 10) {
    cout << "L";
}
else {
    cout << "E";
}

cout << "\nPress Enter to exit...";
cin.ignore(10000, '\n');
cin.get();

return 0;
}
