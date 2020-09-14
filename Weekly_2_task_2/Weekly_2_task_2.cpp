#include <iostream>
#include <string>

int main() {

    for (int z = 100; z >= 0; z--) {
        std::cout << " " << z;
        if (z % 20 == 0) {
            std::cout << "\n";
        }
    }

}
