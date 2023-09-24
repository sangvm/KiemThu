#include <iostream>
#include <fstream>
#include <string>

int main() {
    int count = 0;

    for (int i = 1; i <= 49; ++i) {
        std::ifstream expectedFile("output_expected_test_" + std::to_string(i) + ".out");
        std::ifstream actualFile("output_actual_test_" + std::to_string(i) + ".out");

        std::string expectedContent, actualContent;
        expectedContent.assign(std::istreambuf_iterator<char>(expectedFile), std::istreambuf_iterator<char>());
        actualContent.assign(std::istreambuf_iterator<char>(actualFile), std::istreambuf_iterator<char>());

        expectedFile.close();
        actualFile.close();

        if (expectedContent == actualContent) {
            count++;
        }
    }

    std::cout << "Tong so luong file trung nhau: " << count << std::endl;

    return 0;
}
