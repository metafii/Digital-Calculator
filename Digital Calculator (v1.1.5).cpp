//Digital Calculator (v1.2)
#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;

int add(int procces_no)
{
    float total = 0.00;
    int n;
    float inputs = 0.00;
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
        cout << "\nConclusion: " << total << "\n";
    }
    return 0;
}

int subs(int procces_no)
{
        float a, b;
        cout << "\nEnter the first number: ";
        cin >> a;
        cout << "\nEnter the second number: ";
        cin >> b;
        cout << "\nConclusion: " << a - b << "\n";
        return 0;
}

int multi(int process_no)
{
    int n;
    float mul = 1.00;
    float inputs = 0.00;
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
            mul *= inputs;
        }
    }
    cout << "\nConclusion: " << mul << "\n";
    return 0;
}

int div(int process_no)
{
    float a, b;
    float result = 0.00;
    cout << "\nEnter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    if (b == 0)
        cout << "\nA number cannot be divided by zero. ";
    else
        cout << "\nConclusion: " << a / b << "\n";
    return 0;
}

int square(int process_no)
{
    float a;
    cout << "\nEnter a number you want to square: ";
    cin >> a;
    cout << "\nConclusion: " << pow(a, 2) << "\n";
    return 0;
}

int square_r(int process_no)
{
    float a;
    cout << "\nEnter a number you want to take the square root of: ";
    cin >> a;
    if (a < 0)
        cout << "\nThe number in the square root cannot be less than zero. ";
    else
        cout << "\nConclusion: " << sqrt(a) << "\n";
    return 0;
}

int q_e(int procces_no)
{
    double k1, k2, r1, r2, t, d = 0.00;
    cout << "Write down the coefficients of the x variables in the equation in such a way that there are space between them: ";
    cin >> k1 >> k2;
    cout << "\nEnter the fixed term (cx^0): ";
    cin >> t;
    if (k1 == 0)
    {
        r1 = t / k2;
        cout << "(" << k2 << ")" << "x + " << "(" << t << ")" << " = 0\n\n";
        cout << "Bu denklem ikinci dereceden değil.\nCevabı= " << r1 << "\n";
        goto jump;
    }
    else if (k2 == 0)
    {
        cout << "(" << k1 << ")" << "x^2 + " << "(" << t << ")" << " = 0\n\n";
        d = pow(k2, 2) - 4 * k1 * t;
        if (d > 0)
        {
            r1 = (-k2 + sqrt(d)) / (2 * k1);
            r2 = (-k2 - sqrt(d)) / (2 * k1);
            cout << "The equation has two different roots. S.O.S = { " << r1 << ", " << r2 << " }" << "\n";
        }
        else if (d == 0)
        {
            r1 = (-k2) / (2 * k1);
            cout << "Both roots of the equation are equal to each other. S.O.S = {" << r1 << "}" << "\n";
        }

        else if (d < 0)
        {
            cout << "The equation has no solution in the set of real numbers." << "\n";
        }
    }
    cout << "(" << k1 << ")" << "x^2 + " << "(" << k2 << ")" << "x + " << "(" << t << ")" << " = 0\n\n";
    d = pow(k2, 2) - 4 * k1 * t;
    if (d > 0)
    {
        r1 = (-k2 + sqrt(d)) / (2 * k1);
        r2 = (-k2 - sqrt(d)) / (2 * k1);
        cout << "The equation has two different roots. S.O.S = { " << r1 << ", " << r2 << " }" << "\n";
    }
    else if (d == 0)
    {
        r1 = (-k2) / (2 * k1);
        cout << "Both roots of the equation are equal to each other. S.O.S = {" << r1 << "}" << "\n";
    }

    else if (d < 0)
    {
        cout << "The equation has no solution in the set of real numbers." << "\n";
    }
jump:
    exit(0);
}

int sin(int process_no)
{
    float x;
    cout << "\nNow enter a desired number in degrees: ";
    cin >> x;
    cout << "\nConclusion: " << sin(x) << "\n";
    return 0;
}

int cos(int process_no)
{
    float x;
    cout << "\nNow enter a desired number in degrees: ";
    cin >> x;
    cout << "\nConclusion: " << cos(x) << "\n";
    return 0;
}

int tan(int process_no)
{
    float x;
    cout << "\nNow enter a desired number in degrees: ";
    cin >> x;
    cout << "\nConclusion: " << tan(x) << "\n";
    return 0;
}

int cot(int process_no)
{
    float x;
    cout << "\nNow enter a desired number in degrees: ";
    cin >> x;
    cout << "\nConclusion: " << 1 / tan(x) << "\n";
    return 0;
}

int cosec(int process_no)
{
    float x;
    cout << "\nNow enter a desired number in degrees: ";
    cin >> x;
    cout << "\nConclusion: " << 1 / sin(x) << "\n";
    return 0;
}

int sec(int process_no)
{
    float x;
    cout << "\nNow enter a desired number in degrees: ";
    cin >> x;
    cout << "\nConclusion: " << 1 / cos(x) << "\n";
    return 0;
}

int main()
{
    int process_no;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square\n6. Square Root\n7. Quadratic Equations\n8. Trigonometric Operations\n9. Exit\n" << endl;
    cout << "Let's choose one of the above operations and process it in the order of the two numbers you entered." << endl;
    cout << "Please enter the number of the transaction you want to select: ";
    cin >> process_no;

    if (process_no == 1)
    {
        cout << "\n"; add(process_no);
    }


    else if (process_no == 2)
    {
        cout << "\n"; subs(process_no);
    }

    else if (process_no == 3)
    {
        cout << "\n"; multi(process_no);
    }

    else if (process_no == 4)
    {
        cout << "\n"; div(process_no);
    }

    else if (process_no == 5)
    {
        cout << "\n"; square(process_no);
    }

    else if (process_no == 6)
    {
        cout << "\n"; square_r(process_no);
    }

    else if (process_no == 7)
    {
        cout << "\n"; q_e(process_no);
    }

    else if (process_no == 8)
    {
        cout << "\n1. sin(x)\n2. cos(x)\n3. tan(x)\n4. cot(x)\n5. cosec(x)\n6. sec(x)\n" << endl;
        cout << "Let's process a number you entered by choosing one of the above operations: ";
        cin >> process_no;

        if (process_no == 1)
        {
            cout << "\n"; sin(process_no);
        }


        else if (process_no == 2)
        {
            cout << "\n"; cos(process_no);
        }

        else if (process_no == 3)
        {
            cout << "\n"; tan(process_no);
        }

        else if (process_no == 4)
        {
            cout << "\n"; cot(process_no);
        }

        else if (process_no == 5)
        {
            cout << "\n"; cosec(process_no);
        }

        else if (process_no == 6)
        {
            cout << "\n"; sec(process_no);
        }

        else
            cout << "\nPlease enter the numbers in the options. The program is shutting down..." << endl;
    }

    else if (process_no == 9)
        cout << "\nThe program is shutting down..." << endl;

    else
        cout << "\nPlease enter the numbers in the options. The program is shutting down..." << endl;
}