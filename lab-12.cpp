// COMSC-210 | Lab 7 | Andrei Buchatskiy
// IDE used : Visual Studio Code

// Brainstorm:
/* What is some fun data I could use to put itno an array and manipulate?
   Given example was rainfall, as an example. THink of other numeric data that could
   be interesting to analyze using the different <array> functions. How about like a yearly
   farm yield
*/

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
#include <fstream>
using namespace std;

// Set the array size as a constant
const int SIZE = 30;

int main() {
    // Create your array of set elements
    array<int, SIZE> yields{};

    // Open file and check if it opened
    ifstream file("yields.txt");
    if (!file) {
        cout << "Error: File couldnt be opened";
        return 1;
    }

    // Read the file and fill the array
    for(int i = 0; i < SIZE; i++){
        file >> yields[i];
    }
}
