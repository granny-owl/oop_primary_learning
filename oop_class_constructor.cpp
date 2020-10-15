#include <iostream>

struct coeffs {
    int A, B, C;
};

struct discriminant : public coeffs {
    discriminant (int a, int b, int c) {
        this->A = a;
        this->B = b;
        this->C = c;
    };
    double disc() {
        return pow(B, 2) - 4 * A * C;
    }
};

struct solution : public coeffs {
    discriminant d_calc;
    solution (int a, int b, int c) : d_calc(a, b, c) {
        this->A = a;
        this->B = b;
        this->C = c;
    };
    
    void print_roots() {
        if (d_calc.disc() < 0) {
            std::cout << "Negative discriminant, no roots" << '\n';
            return;
        }

        if (d_calc.disc() > 0) {
            std::cout << "Root 1: " << (-B + sqrt(d_calc.disc()))/(2*A) << '\n';
            std::cout << "Root 2: " << (-B - sqrt(d_calc.disc()))/(2*A) << '\n';
            return;
        }

        if (d_calc.disc() == 0) {
            std::cout << "Root: " << -B / (2 * A) << '\n';
        }
    }

};

int main()
{
    std::cout << "Enter a, b and c coeffs of a quadratic equation" << '\n';
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << '\n';

    solution fs(a, b, c);
    fs.print_roots();

    return 0;
}

