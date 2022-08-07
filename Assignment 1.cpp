#include <iostream>

using namespace std;

void prime (int x);

int main()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num; 

    prime(num);
}

void prime (int x)
{
    int sum = 0;
    for (int i = x; i > 0; i--) {
        bool not_prime = false;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                not_prime = true;
                j = i;
            }
        }
        if (not_prime == false) {
            sum = sum + i;
        }
    }
    cout << "The sum of prime numbers less than the input value is : " << sum - 1;
}