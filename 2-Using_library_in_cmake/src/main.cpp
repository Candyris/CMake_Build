#include "../CandyMath/math.hpp"
#include <iostream>

int main()
{

    int var2 = 100;
    int var1 = 34;

    std::cout << "The first variable : " << var1 << std::endl;
    std::cout << "The Second  variable : " << var2 << std::endl;

    std::cout << "ADDITION :" << CandyMath::add(var1, var2) << std::endl;
    std::cout << "SUBSTRACT:" << CandyMath::sub(var1, var2) << std::endl;
    std::cout << "DIVIONS  :" << CandyMath::div(var1, var2) << std::endl;
    std::cout << "MULTIPLE :" << CandyMath::mult(var1, var2) << std::endl;

    return 0;
}
