#include <iostream>
using namespace std;
int main()
{
    float fahr, celsius;
	cout << "temperature in Fahrenheit to Celsius : \n";
    cout << " Enter the temperature in Fahrenheit : ";
    cin >> fahr;
    celsius = ((fahr * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : " << fahr << endl;
    cout << " The temperature in Celsius : " << celsius << endl;
    return 0;
}
