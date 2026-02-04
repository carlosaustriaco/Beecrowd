#include <iostream>
#include <iomanip>

int main(){
    double x, y;

    std::cin >> x >> y;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    std::cout << "MEDIA = " << (3.5*x + 7.5*y) / 11 << std::endl;

    return 0;
}