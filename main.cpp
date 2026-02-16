// COMSC 210 || Lab 6 || Ibrahim Bello
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void enterArrayData(double*);
void outputArrayData(double*);
double* sumArray(double*); 


int main(){
    double *iptr = new double[SIZE];
    enterArrayData(iptr);
    return 0;
}
// This function receives an empty array and 
// populates it with user input.
// Arguments: Dynamic double array to hold 
void enterArrayData(double* arr){

}