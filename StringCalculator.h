#ifndef STRING_CALCULATOR_H
#define STRING_CALCULATOR_H

#include <string>
#include <vector>

class StringCalculator {
public:
    int Add(const std::string& numbers);

private:
    std::vector<int> ParseNumbers(const std::string& numbers, const std::string& delimiter);
};

#endif // STRING_CALCULATOR_H

