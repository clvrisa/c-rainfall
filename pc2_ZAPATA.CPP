#include <iostream>

using namespace std;

void getData(double[], int);
void displayReport(double, double, int, int, double[], int);
double totalRainfall(double[], int);
double averageRainfall(double[], int);
int driestMonth(double[], int);
int wettestMonth(double[], int);


int main()
{
    const int MONTHS = 12;
    int num, driest, wettest;
    double rainfall[MONTHS];
    double total, average, least, most;

    getData(rainfall, MONTHS);

    cout << "\nTotal rainfall: " << totalRainfall(rainfall, MONTHS);
    cout << " inches";
    cout << "\nAverage monthly rainfall: " << averageRainfall(rainfall, MONTHS);
    cout << " inches";
    cout << "\nThe least rain fell was: " << driestMonth(rainfall, MONTHS);
    cout << " inches.";
    cout << "\nThe most rain fell was: " << wettestMonth(rainfall, MONTHS);
    cout << " inches.";
    return 0;
}
void getData(double rainfall[], int MONTHS)
{
    double number;

    cout << "Enter the total rainfall for each month this year." << endl;
    for (int num = 0; num < MONTHS; num++)
    {
        do
        {
            cout << "Month #" << (num+1) << ": ";
            cin >> number;

            if (number<0)
            {
                cout << "Invalid Input" << endl;
            }
        }while(number<0);
        rainfall[num] = number;
    }
}
double totalRainfall(double rainfall[], int MONTHS)
{
    double total = 0;

    for (int num = 0; num < MONTHS; num++)
    {
        total += rainfall[num];
    }
    return total;
}
double averageRainfall(double rainfall[], int MONTHS)
{
    double average;

    average = totalRainfall(rainfall, MONTHS) / MONTHS;

    return average;
}
int driestMonth(double rainfall[], int MONTHS)
{
    double driest = 0;

    for (int num = 0; num < MONTHS; num++)
    {
        if(rainfall[num] < driest)
            {
                driest = rainfall[num];
            }
    }
    return driest;

}
int wettestMonth(double rainfall[], int MONTHS)
{
    double wettest = 0;

    for (int num = 0; num < MONTHS; num++)
    {
        if(rainfall[num] > wettest)
            {
                wettest = rainfall[num];
            }
    }
    return wettest;
}
