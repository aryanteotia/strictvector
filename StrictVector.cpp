#include <iostream>
#include <vector>
using namespace std;
template <class A>
void displayVector(const vector<A> &j) {
    cout << "Your Vector is : ";
    for (const auto &element : j) {
        cout << element << " ";
    }
    cout << "\n\t========== THANK YOU ==========" << endl;
}
int main() {
    vector<int> intVector;
    vector<float> floatVector;
    vector<string> stringVector;
    vector<double> doubleVector;

    int userChoice, vectorSize, dataTypeChoice;
    int intElement;
    float floatElement;
    string stringElement;
    double doubleElement;

    mainMenu:
    cout << "\t1. Enter the size of your vector\n\t2. Proceed without size\n";
    cout << "----------------------------------------------------\nEnter your choice: ";
    cin >> userChoice;

    if (userChoice == 1) {
        cout << "----------------------------------------------------\nEnter the size of your vector: ";
        cin >> vectorSize;
        dataTypeMenu:
        cout << "1. int   2. float    3. string    4. double\nChoose the type of your vector: ";
        cin >> dataTypeChoice;

        switch (dataTypeChoice) {
            case 1:
                intInput:
                intElement = 0;
                cout << "Enter an element to add to this vector" << endl;
                for (int i = 1; i <= vectorSize; i++) {
                    cout << "Element [" << i << "]: ";
                    cin >> intElement;
                    intVector.push_back(intElement);
                }
                displayVector(intVector);
                break;
            case 2:
                floatInput:
                floatElement = 0.0f;
                cout << "Enter an element to add to this vector" << endl;
                for (int i = 1; i <= vectorSize; i++) {
                    cout << "Element [" << i << "]: ";
                    cin >> floatElement;
                    floatVector.push_back(floatElement);
                }
                displayVector(floatVector);
                break;
            case 3:
                stringInput:
                stringElement = "";
                cout << "Enter an element to add to this vector" << endl;
                for (int i = 1; i <= vectorSize; i++) {
                    cout << "Element [" << i << "]: ";
                    cin >> stringElement;
                    stringVector.push_back(stringElement);
                }
                displayVector(stringVector);
                break;
            case 4:
                doubleInput:
                doubleElement = 0.0;
                cout << "Enter an element to add to this vector" << endl;
                for (int i = 1; i <= vectorSize; i++) {
                    cout << "Element [" << i << "]: ";
                    cin >> doubleElement;
                    doubleVector.push_back(doubleElement);
                }
                displayVector(doubleVector);
                break;
            default:
                cout << "\t\tInvalid choice\n\tPlease choose the correct option" << endl;
                goto dataTypeMenu;
        }
    } else if (userChoice == 2) {
        int i = 0;
        cout << "Note: Enter -1 To Complete Input!\n";
        cout << "----------------------------------------------------\n";
        cout << "Enter an element to add to this vector" << endl;
        while (true) {
            cout << "\tElement [" << i << "]: ";
            cin >> doubleElement;
            if (doubleElement == -1) break;
            doubleVector.push_back(doubleElement);
            i++;
        }
        displayVector(doubleVector);
    } else {
        cout << "\tInvalid choice\n\tPlease choose the correct option" << endl;
        goto mainMenu;
    }
    return 0;
}