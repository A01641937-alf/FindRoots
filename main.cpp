#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

double mySqrt(double number) {
    if (number < 0) return -1.0;
    double epsilon = 1e-10;
    double guess = number / 2.0;
    while (std::abs(guess * guess - number) >= epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
}

std::vector<double> findRoots(double a, double b, double c) {
    std::vector<double> roots;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double sqrtDiscriminant = mySqrt(discriminant);
        if (sqrtDiscriminant < 0) {
            std::cerr << "Error calculating square root of discriminant" << std::endl;
            return roots;
        }
        double r1 = (-b + sqrtDiscriminant) / (2 * a);
        double r2 = (-b - sqrtDiscriminant) / (2 * a);
        roots.push_back(r1);
        roots.push_back(r2);
    }
    else if (discriminant == 0) {
        double r = -b / (2 * a);
        roots.push_back(r);
    }
    else {
        std::cerr << "No real roots exist" << std::endl;
    }

    return roots;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: findroots a b c" << std::endl;
        return 1;
    }


    double a, b, c;
    try {
        a = std::stod(argv[1]);
        b = std::stod(argv[2]);
        c = std::stod(argv[3]);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid input: Please provide numerical values for a, b, and c." << std::endl;
        return 1;
    }

    std::vector<double> roots = findRoots(a, b, c);

    if (roots.empty()) {
        std::cout << "{}" << std::endl;
    }
    else {
        std::cout << "{";
        for (size_t i = 0; i < roots.size(); ++i) {
            std::cout << roots[i];
            if (i < roots.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "}" << std::endl;
    }

    return 0;
}
