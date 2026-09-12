// COMSC-210 | Lab 6 | Huiluan Yie

#include <iostream>
using namespace std;

const int SIZE = 5;

//Function prototype
void enterArrayData(double * );
void outputArrayData(double * );
double sumArray(double * );

int main() {
    double * dArray = nullptr;
    dArray = new double[SIZE];

    //Function calls
    enterArrayData(dArray);
    outputArrayData(dArray);
    cout << "Sum of values: " << sumArray(dArray);

    delete[] dArray;

    return 0;
}

//Function definition
void enterArrayData(double * arr) {
    // enterArrayData() populates the array with values that the user enters via the console
    // arguments: the dynamic double array
    // returns: none
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\t> Element #" << i << ": ";
        cin >> * (arr + i);
    }
    cout << "Data entry complete.\n";
}

void outputArrayData(double * arr) {
    // outputArrayData() outputs  the array's contents on one line
    // arguments: the dynamic double array
    // returns: none
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << * (arr + i) << " ";
    }
    cout << endl;
}

double sumArray(double * arr) {
    // sumArray() both calculates and returns the array's sum
    // arguments: the dynamic double array
    // returns: the sum
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += * (arr + i);
    }
    return sum;
}