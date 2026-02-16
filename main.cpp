// COMSC 210 || Lab 6 || Ibrahim Bello
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void enterArrayData(double*);
void outputArrayData(double*);
double sumArray(double*); 


int main(){
    double *iptr = new double[SIZE];
    enterArrayData(iptr);
    outputArrayData(iptr);
    double total = sumArray(iptr);
    cout << "Sum of values: " << total;
    return 0;
}
// This function receives an  array and 
// populates it with user input.
// Arguments: Dynamic double array to hold floats
// Returns: None
void enterArrayData(double* arr){
    cout << "Data entry for the array: " << endl;
    for (int i = 0; i < SIZE; i++ ){
        cout << "   > Element #" << (i+1) << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}

// This function receives an array and outputs it on one line.
// Arguments: Dynamic double array to hold floats
// Returns: None
void outputArrayData(double* arr){
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
    cout << "Output complete." << endl;
}

// This function receives an array and calculates and returns
// its result.
// Arguments: Dynamic double array to hold floats
// Returns: Double holding sum of elements in array
double sumArray(double* arr){
    double total = 0;
    for (int i = 0; i < SIZE; i++){
        total += *(arr + i);
    }
    return total;
}