#include <iostream>
#include <string>

int main() {

    int x = 0;

    do {
        std::cout << " " << x;
        x = x + 5;
    } while (x <= 50);
    
}