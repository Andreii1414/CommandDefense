#include <iostream>
#include "Math.h"

int main()
{
    Math test;
    std::cout << test.Add(1,2); //3
    std::cout << std::endl;
    std::cout << test.Add(1, 2, 3); //6
    std::cout << std::endl;
    std::cout << test.Add(3.5,3.6); //7.1 -> 7
    std::cout << std::endl;
    std::cout << test.Add(2.5, 3.2, 6.8);  //12.5 -> 12
    std::cout << std::endl;
    std::cout << test.Mul(12, 3); //36
    std::cout << std::endl;
    std::cout << test.Mul(12, 3, 4); //144
    std::cout << std::endl;
    std::cout << test.Mul(12.3, 3.5);//43.05 -> 43
    std::cout << std::endl;
    std::cout << test.Mul(12.3, 3.5, 4.5);//193,725 -> 193
    std::cout << std::endl;
    std::cout << test.Add(5, 1, 2, 3, 4, 5);//15
    std::cout << std::endl;
    std::cout << test.Add("Ex", "emplu");//Exemplu
    return 0;
}

