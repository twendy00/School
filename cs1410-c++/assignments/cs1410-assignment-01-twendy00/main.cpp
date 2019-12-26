#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    int low;
    int high;
    double sum = 0;
    double avg;
    int count = 0;

    while (true)
    {
        cout << "Enter an integer` between 1 and 100 (-1 to terminate):" << endl;
        cin >> number;

        if (number == -1)
        {
            break;
        }
        if (number < 1 || number > 100)
        {
            cout << "That's not an integer between 1 and 100. Try again." << endl;
        }
        else
        {
            if (count == 0)
            {
                low = high = number;
            }
            if (number > high)
            {
                high = number;
            }
            if (number < low)
            {
                low = number;
            }
            sum += number;
            count++;
        }
    }

    cout << setw(10) << "Count" << setw(10) << "Minimum" << setw(10) << "Maximum" << setw(10) << "Average" << endl;
    cout << setw(10) << count << setw(10) << low << setw(10) << high << setw(10) << sum / count << endl;

    return 0;
}