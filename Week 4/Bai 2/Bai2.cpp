#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char Grade(int score) {
    int res;
    if (score < 0 || score > 10) return 'I';
    if (score >= 9) res = 'A';
    else 
        if (score >= 8) res = 'B';
        else 
            if (score >= 6.5) res = 'C';
            else
                if (score >= 5) res = 'D';
                else
                    res = 'F';
    return res;
}

int main() {
    int testcase = 6;
    for (int i = 1; i <= testcase; i++) {
        ifstream inputFile("input_test_" + to_string(i) + ".inp");\
        int score;
        inputFile >> score;
        inputFile.close();
        ofstream outputFile("output_test_" + to_string(i) + ".out");
        outputFile << Grade(score) << endl;
        outputFile.close();
    }
}