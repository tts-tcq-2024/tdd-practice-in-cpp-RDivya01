#include "StringCalculator.h"
#include <sstream>
#include <stdexcept>
#include <algorithm>

int StringCalculator::add(const std::string& numbers) {
    if (numbers.empty()) {
        return 0;
    }
    // This is just a placeholder to make the initial test pass.
    return 0;
}

std::vector<int> StringCalculator::ParseNumbers(const std::string& numbers, const std::string& delimiter) {
    std::vector<int> result;
    std::string num;
    std::istringstream stream(numbers);
    while (std::getline(stream, num, delimiter[0])) {
        result.push_back(std::stoi(num));
    }
    return result;
}

