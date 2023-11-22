#include <iostream>
#include <cmath>

int main() {
    // Input the value of angle α in degrees
    double alpha;
    std::cout << "Enter the value of alpha in degrees: ";
    std::cin >> alpha;

    // Convert angle α to radians
    double alpha_rad = alpha * M_PI / 180.0;

    // Calculate the value of z using the first formula (z_1)
    double z_1 = (sin(2 * alpha_rad) + sin(5 * alpha_rad) - sin(3 * alpha_rad)) /
        (cos(alpha_rad) - cos(3 * alpha_rad) + cos(5 * alpha_rad));

    // Calculate the value of z using the second formula (z_2)
    double z_2 = tan(3 * alpha_rad);

    // Output the results
    std::cout << "Result of the first formula (z_1): " << z_1 << std::endl;
    std::cout << "Result of the second formula (z_2): " << z_2 << std::endl;

    return 0;
}
