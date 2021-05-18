/*
Hambuger Orders
Name
Date
This program uses a class and objects to represent
hamburger orders at a resturant. You need to add the
code to create a new order with the following information...
Customer - Jill
Toppings - ketchup, mustard, onions, pickles
Once you have created your object, use the provided function
to display the order to the console.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
Represents an order for a hamburger. Stores the customer's
name and the toppings to add to the hamburger. The toppings
are stored in a vector, which can be used to store certain
attributes within a class.
*/
class Hamburger
{
public:
    string customerName;
    vector<string> toppings;
};

/*
Displays the order for a hamburger.
*/
void printOrder(Hamburger h)
{
    cout << h.customerName << " ordered a hamburger with..." << "\n";
    for (int i = 0; i < h.toppings.size(); i++)
    {
        cout << h.toppings[0] << "\n";
    }
}

int main()
{
    Hamburger h1;
    h1.customerName = "Jimbo";
    h1.toppings.push_back("lettuce");
    h1.toppings.push_back("tomato");
    h1.toppings.push_back("mayo");
    h1.toppings.push_back("fried onions");
    printOrder(h1);

    // Add your code here!

    return 0;
}
