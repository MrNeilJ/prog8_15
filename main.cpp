// This program stores employee hours worked
// and hourly pay rates in two parallel arrays.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPS = 5;
    int hours[NUM_EMPS];            // Define 2 parallel arrays
    double payRate[NUM_EMPS];
    double grossPay;

    // Get employee work data
    cout << "Enter the hours worked and hourly pary rates of "
         << NUM_EMPS << " employees. \n";

    for (int index = 0; index < NUM_EMPS; index++)
    {
        cout << "\nHours worked by employee $" << (index + 1) << ": ";
        cin  >> hours[index];
        cout << "Hourly pay rate for this employee: $";
    }
}