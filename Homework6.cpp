#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

/*double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < abs(exponent); i++) {
        result *= base;
    }
    if (exponent < 0) result = 1 / result;
    return result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}*/


/*int sumInRange(int a, int b) {
    int sum = 0;
    if (a > b) swap(a, b);
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Sum of numbers in range: " << sumInRange(num1, num2) << endl;
    return 0;
}*/

/*bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

vector<int> findPerfectNumbers(int start, int end) {
    vector<int> perfectNumbers;
    for (int num = start; num <= end; num++) {
        if (isPerfect(num)) {
            perfectNumbers.push_back(num);
        }
    }
    return perfectNumbers;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    vector<int> perfectNumbers = findPerfectNumbers(start, end);
    cout << "Perfect numbers in the range: ";
    for (int num : perfectNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}*/
/*void displayCard(const string& rank, const string& suit) {
    cout << "+-------------+" << endl;
    cout << "|  " << rank;
    int spaces = 11 - rank.length();
    for (int i = 0; i < spaces; i++) cout << " ";
    cout << "|" << endl;
    cout << "|             |" << endl;
    int suitSpaces = (13 - suit.length()) / 2;
    cout << "|";
    for (int i = 0; i < suitSpaces; i++) cout << " ";
    cout << suit;
    for (int i = 0; i < (13 - suit.length() - suitSpaces); i++) cout << " ";
    cout << "|" << endl;
    cout << "|             |" << endl;
    cout << "| ";
    for (int i = 0; i < 11 - rank.length(); i++) cout << " ";
    cout << rank << " |" << endl;
    cout << "+-------------+" << endl;
}

int main() {
    string rank, suit;

    cout << "Enter the rank of the card (e.g., Ace, 2, King): ";
    cin >> rank;
    cout << "Enter the suit of the card (e.g., Hearts, Spades): ";
    cin >> suit;

    displayCard(rank, suit);

    return 0;
}*/


/*bool isLucky(int number) {
    if (number < 100000 || number > 999999) {
        cout << "The number is not six digits." << endl;
        return false;
    }

    int firstHalf = number / 1000;  // Перші три цифри
    int secondHalf = number % 1000; // Останні три цифри

    int sum1 = 0, sum2 = 0;

    while (firstHalf > 0) {
        sum1 += firstHalf % 10;
        firstHalf /= 10;
    }

    while (secondHalf > 0) {
        sum2 += secondHalf % 10;
        secondHalf /= 10;
    }

    return sum1 == sum2;
}

int main() {
    int number;
    cout << "Enter a six-digit number: ";
    cin >> number;

    if (isLucky(number)) {
        cout << "The number is lucky!" << endl;
    }
    else {
        cout << "The number is not lucky." << endl;
    }

    return 0;
}*/


/*pair<int, int> linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return { i, i + 1 };
        }
    }
    return { -1, size };
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    const int size = 10;
    int arr[size];
    int key;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 20 + 1;
    }

    cout << "Generated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the key to search for: ";
    cin >> key;

    pair<int, int> result = linearSearch(arr, size, key);

    if (result.first != -1) {
        cout << "Key found at index " << result.first << " after " << result.second << " comparisons." << endl;
    }
    else {
        cout << "Key not found in the array. Total comparisons: " << result.second << endl;
    }

    return 0;
}*/



/*int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    srand(static_cast<unsigned>(time(0)));
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50 + 1;
    }

    sort(arr, arr + size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key;
    cout << "Enter the key to search for: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Key found at index " << result << endl;
    }
    else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}*/

/*int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Decimal value: " << decimal << endl;

    return 0;
}*/