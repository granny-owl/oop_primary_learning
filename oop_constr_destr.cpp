#include <iostream>
#include <cmath>
#include <ctime>

struct foo {
    int N = rand() % 128 + 2;
    int *bar = new int[N];
    
    foo() {
        for (int i = 0; i < N; i++) {
            bar[i] = rand() % 500;
            std::cout << bar[i] << '\n';
        }

        std::cout << "BANG!\n";
    }

    ~foo() {
        delete[] bar; 
    }
};

int main() {
    srand(time(0));
    foo foo_1;
    foo foo_2;
    foo foo_3;
    return 0;
}
