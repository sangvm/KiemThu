#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void INPUT(int &X) {
    int x;
    cin >> x;
    X = x;
}

void OUTPUT(int X, int Y) {
    cout << "X = " << X << ", Y = " << Y << endl;
}

void input(int X, int Y) {
    while (Y > 0) {
        if (X > 0) {
            Y = Y - X;
        }
        else {
            INPUT(X);
        }
    }
    OUTPUT(X, Y);
}

int main() {
    int X, Y;
    cin >> X >> Y;
    input(X, Y);
}
