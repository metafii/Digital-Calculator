//Digital Calculator (v1.0)
#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;
int main()
{
    float a, b, x;
    int n;
    float inputs;
    float multi = 1.00;
    float total = 0;
    int process_no, trigo_func;
    float result;
    bool PROCESS = false;
    bool TRIGO = false;

    cout << " 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Trigonometric Operations\n 6. Square\n 7. Square Root\n 8. Exit\n" << endl;
    cout << "Let's choose one of the above operations and process it in the order of the two numbers you entered." << endl;
    cout << "Please enter the number of the transaction you want to select: ";
    cin >> process_no;

    while (!PROCESS)
    {
        if (process_no == 1)
        {
            cout << "\nEnter the number of numbers to add: ";
            cin >> n;
            cout << "\nEnter the specified amount of numbers (Press enter after each number):\n";
            if (n <= 0)
            {
                cout << "\nThe number of data to be collected cannot be less than or equal to zero.\n" << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cin >> inputs;
                    total += inputs;
                }
            }
            cout << "\nConclusion: " << total;
            PROCESS = true;
        }

        else if (process_no == 2)
        {
            cout << "\nNow enter the two numbers you want with a space between them: ";
            cin >> a >> b;
            result = a - b;
            cout << "\nConclusion: " << result;
            PROCESS = true;
        }

        else if (process_no == 3)
        {

            cout << "\nEnter the number of numbers to add: ";
            cin >> n;
            cout << "\nEnter the specified amount of numbers (Press enter after each number):\n";
            if (n <= 0)
            {
                cout << "\nThe number of data to be collected cannot be less than or equal to zero." << endl;
            }
            else
            {
                for (int i = n; i > 0; i--)
                {
                    cin >> inputs;
                    multi *= inputs;
                }
            }
            cout << "\nConclusion: " << multi;
            PROCESS = true;
        }

        else if (process_no == 4)
        {
            cout << "\nNow enter the two numbers you want with a space between them: ";
            cin >> a >> b;
            result = a / b;
            if (b == 0)
            {
                cout << "\nA number cannot be divided by zero. ";
            }
            else
            {
                cout << "\nConclusion: " << result;
            }
            PROCESS = true;
        }

        else if (process_no == 5)
        {
            while (!TRIGO)
            {
                cout << " \n 1. sin(x)\n 2. cos(x)\n 3. tan(x)\n 4. cot(x)\n 5. cosec(x)\n 6. sec(x)\n" << endl;
                cout << "Let's process a number you entered by choosing one of the above operations: ";
                cin >> trigo_func;

                if (trigo_func == 1)
                {
                    cout << "\nNow enter a desired number in degrees: ";
                    cin >> x;
                    result = sin(x);
                    cout << "\nConclusion: " << result;
                    TRIGO = true;
                }

                else if (trigo_func == 2)
                {
                    cout << "\nNow enter a desired number in degrees: ";
                    cin >> x;
                    result = cos(x);
                    cout << "\nConclusion: " << result;
                    TRIGO = true;
                }

                else if (trigo_func == 3)
                {
                    cout << "\nNow enter a desired number in degrees: ";
                    cin >> x;
                    result = tan(x);
                    cout << "\nConclusion: " << result;
                    TRIGO = true;
                }

                else if (trigo_func == 4)
                {
                    cout << "\nNow enter a desired number in degrees: ";
                    cin >> x;
                    result = 1 / tan(x);
                    cout << "\nConclusion: " << result;
                    TRIGO = true;
                }

                else if (trigo_func == 5)
                {
                    cout << "\nNow enter a desired number in degrees: ";
                    cin >> x;
                    result = 1 / sin(x);
                    cout << "\nConclusion: " << result;
                    TRIGO = true;
                }

                else if (trigo_func == 6)
                {
                    cout << "\nNow enter a desired number in degrees: ";
                    cin >> x;
                    result = 1 / cos(x);
                    cout << "\nConclusion: " << result;
                    TRIGO = true;
                }


                else
                {
                    cout << "\nYou entered the wrong number. Please try again..." << endl;
                    PROCESS = true;
                }

            }
            PROCESS = true;
        }

        else if (process_no == 6)
        {
            cout << "\nEnter a number you want to square: ";
            cin >> a;
            result = pow(a, 2);
            cout << "\nConclusion: " << result;
            PROCESS = true;
        }

        else if (process_no == 7)
        {
            cout << "\nEnter a number you want to take the square root of: ";
            cin >> a;
            if (a < 0)
            {
                cout << "\nThe number in the square root cannot be less than zero. ";
            }
            else
            {
                result = sqrt(a);
                cout << "\nConclusion: " << result;
            }
            PROCESS = true;
        }

        else if (process_no == 8)
        {
            exit(0);
            PROCESS = true;
        }

        else
        {
            cout << "\nYou entered the wrong number. Please restart the program...." << endl;
            PROCESS = true;
        }
    }
    return 0;
}