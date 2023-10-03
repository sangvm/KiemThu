#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string foo(int x) {
    string res;
    switch (x)
    {
    case 65:
        res = "A";
        break;
    case 66:
        res = "B";
        break;
    case 67:
        res = "C";
        break;
    default:
        res = "haven't check";
        break;
    }
    return res;
}

int main() {
    int testcase = 4;
    for (int i = 1; i <= testcase; i++) {
        ifstream inputFile("input_test_" + to_string(i) + ".inp");
        int x;
        inputFile >> x;
        inputFile.close();
        ofstream outputFile("output_test_" + to_string(i) + ".out");
        string res = foo(x);
        outputFile << res << endl;
        outputFile.close();
    }
}