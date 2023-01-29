#include<iostream>
#include<iomanip>

int main(void) {
    using namespace std;

    int Size, Line = 10;

    cout << "Enter size: ";
    cin >> Size;
    cout << endl;

    if (0 < Size && Size <= 50) {
        for (int i = 0; i < Size; i++) {
            if ((i % Line) == 0) {
                cout << endl;
            }
                cout << setw(3) << i;
        }
    }
    else {
        cout << "Number must be below 50!";
    }
}