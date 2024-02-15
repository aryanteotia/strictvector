
Strict_vector:
Introduction
This C++ program allows users to create and manipulate vectors of various data types (int, float, string, double, char). Users have the option to either specify the size of the vector beforehand or proceed without specifying the size and terminate input with a sentinel value. The program provides functionality to add elements to vectors, display vectors, and remove elements from vectors.

Prerequisites:
To run this C++ program, you'll need a C++ compiler installed on your system. This code was written and tested using the C++ standard library.

Getting Started:
Clone the repository or download the source code file.
Compile the source code using a C++ compiler.
Execute the compiled program.
Follow the prompts to create and manipulate vectors.
Instruction
Upon starting, you will be presented with a menu where you have to choose from given option 1. Enter the size of vector & 2.Proceed the vector. if user choose option 1 then you will be asked for the size of the vector. And if you choose option 2 then you use a sentinel value (-1) to terminate your input in this case. We create a vector with no initialize size provided until the sentinel value is entered.

How to create the vector
Upon execution, the program will prompt you with two options:

Enter the size of your vector.
Proceed without specifying the size.
(Option 1):

If you choose to enter the size of your vector, input the desired size when prompted.

After specifying the size, you will be prompted to choose the data type for your vector:

int 2. float 3. string 4. double 5. char
Proceed to enter the elements for your chosen data type. For each element, the program will prompt you accordingly.

(Option 2):

If you choose to proceed without specifying the size, enter the elements for your vector. Use -1 as a sentinel value to indicate the end of input.

After creating the vector, you have the option to remove the last element by entering 1 when prompted. Error handling is implemented for invalid input. Follow these steps to create and manipulate vectors using the provided C++ program.

Code Structure
The code begins with the inclusion of the necessary header files:

#include <iostream>
#include <vector>
These headers provide functionality for input/output operations and vector manipulation, respectively.

Namespace Declaration:
The code utilizes the std namespace for convenience:

using namespace std;
This allows the use of standard library components without explicitly specifying the namespace.

Template Function Definition:
A template function display is defined to display the contents of a vector:

template <class T>
void display(vector<T> &v){
    // Function implementation
}
Main Function Definition:
The main() function serves as the entry point of the program:

int main(){
    // Function implementation
    return 0;
}
It contains the program logic for creating, populating, displaying, and manipulating vectors.

Vector Creation and Manipulation:
Within the main() function, vectors of different data types (int, float, string, double, char) are created and manipulated based on user input. User Input Handling:

The program interacts with the user to gather input for vector creation: Users can choose to specify the size of the vector or proceed without specifying the size. Input validation and error handling are implemented to ensure proper program execution.

Display Function Invocation:
After vector creation and manipulation, the display() function is invoked to print the contents of each vector.

Looping and Control Flow:
The program utilizes loops (for and while) and control flow statements (if, else if, else, goto) to manage user input, vector creation, and manipulation.

Error Handling:
Error handling mechanisms are implemented to handle invalid user input and unexpected scenarios gracefully.

Code Comments:
Inline comments are provided throughout the code to enhance readability and explain the purpose of specific sections or statements.

Functionality Encapsulation:
The code encapsulates functionality into reusable components (such as the display function) and modularizes the program logic.

Clean Program Exit:
The main() function returns 0 to indicate successful program termination.
