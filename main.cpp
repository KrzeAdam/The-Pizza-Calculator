/* Title: The pizza calculator

 * Descrption:
 * Created to compare 2 pizzas of the same type, but different sizes.
 * Calculates ratio area_of_pizza to its price
 * and returns the better choice (financial choice). I assumed that the height is the
 * same to both bigger and smaller one.

 * Author: Adam Krzeszowski

 * Feel free to use.  Enjoy your pizza :p
 */

#include <iostream>
#include <cmath>
#include <vector>

using std::cout, std::cin;

class Pizza
{
private:
    double m_radius1; // a radius of the 1st pizza
    double m_price; // a radius of 2nd one

public:
    Pizza(double const & radius1 = 0, double const & price = 1)
    {
        m_radius1 = radius1;
        m_price = price;
    }

    double divide()
    {
        return  M_PI * pow(m_radius1,2)/m_price;
    }
};



int main() {
    std::vector <double> p; //collects pizzas' area to price ratio.
    double input1=0, input2=1;
    for(int i=0; i<2; i++)
    {
        cout << "Enter a radius of the pizza:"; //remember to use '.' as a separator in the double type numbers.
        cin >> input1; 
        cout << "Enter a price of the pizza:";
        cin >> input2;
        Pizza p_i(input1, input2); // creating or overwriting object p_i
        p.push_back(p_i.divide());
    }
    cout << "The pizza no ";
    if(p.back()>p.front())
        cout << "2";
    else
        cout << "1";
    cout << " is a better choice.";

    return 0;
}
