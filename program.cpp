#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "\nDecimal to ascii for numbers 32 to 127 are:\n\n";

    int col = 1;

    for (int asc_char = 32; asc_char < 128; asc_char++)
    {
        std::cout << std::setw(6) << asc_char << std::setw(3) << static_cast<char>(asc_char);
        col++;
        if (col > 7)
        {
            col = 1;
            std::cout << "\n"; // start new row
        }
    }
    std::cout << "\n";
}