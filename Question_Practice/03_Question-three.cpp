#include <iostream>
#include <vector>
using namespace std;

int convertArrayToNumber(vector<int>& arr1 , vector<int>& arr2) {
    int num1 = 0, num2 = 0;
    int multiplier = 1;
    for (int i = 0; i < arr1.size(); i++) {
        num1 += arr1[i] * multiplier;
        multiplier *= 10;
    }
    for (int i = 0; i < arr1.size(); i++) {
        num2 += arr2[i] * multiplier;
        multiplier *= 10;
    }

    return num1, num2;
}

int main() {
    vector<int> arr1 = {2, 4, 3};
 	vector<int> arr2 = {5, 6, 4};
    int number = convertArrayToNumber(arr1, arr2);
    
    cout << "The number is: " << number << endl;

    return 0;
}
