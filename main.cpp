#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib> 
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <limits>

//comment

/*
comment
*/

using namespace std;

int imGlobal =0;
const double PI = 3.141;

int main(int argc, char** argv){

    std::cout << "hello world" << endl;

    bool married = true;
    char myGrade = 'A';

    unsigned short int unshint = 1;
    short int shint = 1; //16 bits
    int maint = 1; //32 bits
    long malong = 1; //64 bits

    double max = numeric_limits<int>::max();
    long double bits = log2(max);

    cout << "extermum: " << numeric_limits<unsigned int>::max() << endl;
    cout << bits << endl;

    /*
    double a1 = 4294967296;
    long double a2 = pow(a1,a1);
    cout << a2;
    cout << INFINITY;
    */

    float x = 1; //7 digits
    double x2 = 1; //15 digits
    long double x3 = 1;

    auto whatami = true;

    int stv = 2147483647;
    long int poin = pow(2, 32);
    cout 
    << "\nint tyoe:\n"
    << "bytes: " 
    << sizeof(stv)*8 
    << "\nmax num: "
    << numeric_limits<unsigned int>::max()
    << "\n2^32 = "
    << poin
    << endl;

    /*
    int a = 1;
    int *p = &a;
    while (true) {
        cout << *p << endl;
        p++;

    }
    */

    // printf("Sum = %.7f\n", (1.1111111 + 1.1111111));



    return 0;
}

