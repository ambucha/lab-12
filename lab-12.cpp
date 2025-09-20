// COMSC-210 | Lab 7 | Andrei Buchatskiy
// IDE used : Visual Studio Code

// Brainstorm:
/* What is some fun data I could use to put itno an array and manipulate?
   Given example was rainfall, as an example. THink of other numeric data that could
   be interesting to analyze using the different <array> functions. How about like a yearly
   farm yield - gonna do bushels per acre as the number
*/

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
#include <fstream>
using namespace std;

// Set the array size as a constant
const int SIZE = 30;

// displayAll() displays all array elements
// arguments: array
// return: nothing
void displayAll(const array<double, SIZE>&);

// displayAll() displays selected array element
// arguments: array
// return: nothing
void displaySelect(const array<double, SIZE>&);

int main() {
    // Create your array of set elements
    array<double, SIZE> yields{};

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

    displayAll(yields);
    displaySelect(yields);

    /* Testing if the file read correct
    for (int i = 0; i < SIZE; i++) {
        cout << yields[i] << " ";
    }
    */

}

// Function uses for loop to display every element of the array
void displayAll(const array<double, SIZE>& arr){
    cout << "All Yields: ";
    for (double i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

void displaySelect(const array<double, SIZE>& arr){\
    // Create variable for element number
    int num;
    cout << "Select yield # (enter -1 if you would not like to select another yield): ";
    cin >> num;

    // Create a loop to keep choosing different elements until chosen to stop
    while(num != -1){
        cout << "Element #" << num << ": " << arr[num - 1] << endl;
        cout << "Select next yield (-1 to stop): ";
        cin >> num;
    }
    cout << endl;
}