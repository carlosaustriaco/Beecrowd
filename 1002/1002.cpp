#include <iostream>
#include <iomanip>

const double pi = 3.14159;

int main(){
    double raio;

    std::cin >> raio;

    std::cout << std::fixed;
    std::cout << std::setprecision(4);
    std::cout << "A=" << pi*raio*raio << std::endl;

    return 0;
}