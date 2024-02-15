Introduction:
This C++ program enables users to create and manage vectors of various data types (int, float, string, double, char). Users can specify the vector size or proceed without specifying and use a sentinel value to terminate input. The program supports adding, displaying, and removing elements from vectors.

Prerequisites:
Ensure you have a C++ compiler installed. This code relies on the C++ standard library.

Getting Started:

Clone the repository or download the source code file.
Compile using a C++ compiler.
Execute the compiled program and follow the prompts to create and manipulate vectors.
Usage:
Upon starting, choose between:

Enter the size of the vector.
Proceed without specifying the size using a sentinel value (-1).
Creating the Vector:
When prompted:

If choosing option 1, enter the desired size and select the data type (int, float, string, double, char).
If choosing option 2, input elements for your vector, ending with -1 as a sentinel value.
Manipulation Options:
After creating the vector, you can remove the last element by entering '1' when prompted.

Code Structure:

Begin with necessary header file inclusions.
Use the std namespace for convenience.
Define a template function to display vector contents.
Entry point in the main() function, handling vector creation, population, display, and manipulation.
Utilize loops and control flow statements for user interaction, vector management, and error handling.
Clean program exit is indicated by returning 0 from the main() function.
