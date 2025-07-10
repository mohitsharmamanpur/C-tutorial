#include <iostream>
#include <cmath>   

using namespace std;

                                                     // Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num <= 3) return true;  

                                                    // If the number is divisible by 2 or 3, it's not prime
    if (num % 2 == 0 || num % 3 == 0) return false;

                                                        // Check for factors from 5 to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

                                                   // Function to display all prime numbers in a given range
void displayPrimesInRange(int start, int end) {
    if (start > end) {
        cout << "Invalid range. Start should be less than or equal to end." << endl;
        return;
    }

    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    displayPrimesInRange(start, end);

    return 0;
}