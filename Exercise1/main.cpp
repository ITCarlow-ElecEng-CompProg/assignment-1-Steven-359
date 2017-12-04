/**

25/09/17
Steven O' Brien
Celsius to Fahrenheit Temperature Conversion
Exercise 1


 */



#include <iostream>


using namespace std;

int main()
{
    //Displays Progamme Title
    cout << "\n" << "Celsius to Fahrenheit Temperature Conversion"  ;

    //Variables declaired type double
    double C, F;

    //Prompts the user to enter a value for celsius
    cout << "\n\n" << "Enter value in Celsius:"  ;
    cin >> C ;

    //Equation to calculate Farenheit
    F = ((9/5.0)* C) + 32 ;

    //Displays the result to the user
    cout << "\n" << "The value in Farenheit is:" << F << endl ;


    return 0;
}
