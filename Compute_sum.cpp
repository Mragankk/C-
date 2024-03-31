// Compute sum - 

#include <iostream> //This header file allows input and output operations.
#include <cstdlib> // For atoi function for converting strings to integers
#include <cmath> // For pow(power) function

using namespace std;  //

double computeSeriesSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) { // For even terms
            sum -= 1.0 / pow(i, i);
        } else { // For odd terms
            sum += 1.0 / pow(i, i);
        }
    }
    return sum;
}

int main(int argc, char *argv[]) {
    int n;

    if (argc > 1) {
        // If command line argument is provided
        n = atoi(argv[1]);
    } else {
        // If command line argument is not provided, prompt user for input
        cout << "Enter the number of terms (n): ";
        cin >> n;
    }

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1; // Return non-zero value to indicate error
    }
    double sum = computeSeriesSum(n);
    cout << "Sum of the first " << n << " terms of the series: " << sum << endl;

    return 0;
}
