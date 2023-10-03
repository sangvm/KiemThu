#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int maxSize = 10005;

int Sum(int a[], int n) {
    int i, total = 0;
    for (i = 0; i < n; i++) {
        total = total + a[i];
    }
    return total;
}

int main() {
    int testcase = 3;
    for (int i = 1; i <= testcase; i++) {
        ifstream inputFile("input_test_" + to_string(i) + ".inp");
        int a[maxSize], size, n;
        inputFile >> size >> n;
        for (int j = 0; j < size; j++) {
            inputFile >> a[j];
        }
        inputFile.close();
        ofstream outputFile("output_test_" + to_string(i) + ".out");
        outputFile << Sum(a, n) << endl;
        outputFile.close();
    }
}