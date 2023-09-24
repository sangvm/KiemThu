#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::vector<double> gpa = {-5.2, 1.2, 2.3, 3.1, 3.3, 3.67, 5.24};
    std::vector<int> diemRenLuyen = {-32, 13, 62, 65, 82, 96, 134};

    std::ofstream outputFile;
    int testcaseNumber = 1;

    for (size_t i = 0; i < gpa.size(); ++i) {
        for (size_t j = 0; j < diemRenLuyen.size(); ++j) {
            std::string fileName = "input_test_" + std::to_string(testcaseNumber) + ".inp";
            outputFile.open(fileName);

            if (!outputFile.is_open()) {
                std::cerr << "Khong the mo tao tệp testcase." << std::endl;
                return 1;
            }

            outputFile << gpa[i] << "\n";
            outputFile << diemRenLuyen[j] << "\n";

            outputFile.close();
            ++testcaseNumber;
        }
    }

    std::cout << "Da sinh xong " << testcaseNumber - 1 << " testcase. Kiem tra tệp test_1.inp đến test_49.inp." << std::endl;

    return 0;
}
