#ifndef STRING_CALCULATOR_H
#define STRING_CALCULATOR_H

#include <string>
#include <vector>
#include <stdexcept>

class StringCalculator {
public:
    int add(const std::string& numbers);

private:
    std::vector<int> parseNumbers(const std::string& numbers, const std::string& delimiter);
    std::string extractDelimiter(std::string& numbers);
};

#endif // STRING_CALCULATOR_H
