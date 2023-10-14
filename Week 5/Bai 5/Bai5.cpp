#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int UCLN(int m, int n) {
    if (m < 0) m = -m;
    if (n < 0) n = -n;
    if (m == 0) return n;
    if (n == 0) return m;
    while (m != n) {
        if (m > n) {
            m = m - n;
        }
        else {
            n = n - m;
        }
    }
    return m;
}

int main() {
    int testcase[2] = {2, 2};
    for (int index = 0; index < 2; index++) {
        int count = testcase[index];
        string var = index == 0 ? "x" : "y";
        for (int i = 1; i <= count; i++) {
            ifstream inputFile("input_test_" + var + "_" + to_string(i) + ".inp");
            int m, n;
            inputFile >> m >> n;
            inputFile.close();
            ofstream outputFile("output_test_" + var + "_" + to_string(i) + ".out");
            outputFile << UCLN(m, n) << endl;
            outputFile.close();
        }
    }
}
