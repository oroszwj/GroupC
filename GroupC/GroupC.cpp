// GroupC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

using namespace std;

string promptForQuantity();
string promptForCost();
string promptForState();
void outputResults();

double parseQuantity(string value);
double parseCost(string value);
void parseStateString(string state);

double g_calculationResult = 0;
double g_quantity = 0;
double g_price = 0;
double g_taxRate = 0;
double g_discount = 0;

int main()
{
    string quantStr = promptForQuantity();
    g_quantity = parseQuantity(quantStr);
    cout << "Ok, " << g_quantity << " items." << endl;
    string costStr = promptForCost();
    g_price = parseQuantity(costStr);
    cout << "Ok, $" << g_price << " per item." << endl;
    string stateStr = promptForState();
    outputResults();
}

void outputResults()
{
    g_calculationResult = g_quantity * g_price;
    cout << "The subtotal price is: $" << g_calculationResult << endl;
    double afterDiscount = g_calculationResult * (1.0 - g_discount);
    cout << "The price after discount is: $" << afterDiscount << endl;
    double afterTax = afterDiscount * (1.0 + g_taxRate);
    cout << "The price after tax is: $" << afterTax << endl;
}

string promptForQuantity()
{
    string quantityString;
    cout << "Enter Number of items: " << endl;
    getline(cin, quantityString);
    return quantityString;
}

string promptForCost()
{
    string costStr;
    cout << "Enter Cost per Item: " << endl;
    getline(cin, costStr);
    return costStr;
}

string promptForState()
{
    string stateStr;
    cout << "Enter State of purchase: " << endl;
    getline(cin, stateStr);
    return stateStr;
}

double parseQuantity(string value)
{
    return atoi(value.c_str());
}

double parseCost(string value)
{
    return atof(value.c_str());
}

void parseStateString(string state)
{
    if(strcmp(state.c_str(), "UT") == 0)
    {
        g_discount = 0.03;
        g_taxRate = 0.0685;
        return;
    }
    if(strcmp(state.c_str(), "NV") == 0)
    {
        g_discount = 0.05;
        g_taxRate = 0.08;
        return;
    }
    if(strcmp(state.c_str(),"TX") == 0)
    {
        g_discount = 0.07;
        g_taxRate = 0.0625;
        return;
    }
    if(strcmp(state.c_str(),"AL") == 0)
    {
        g_discount = 0.1;
        g_taxRate = 0.04;
        return;
    }
    if(strcmp(state.c_str(),"CA") == 0)
    {
        g_discount = 0.15;
        g_taxRate = 0.0825;
        return;
    }
    g_discount = 1;
    g_taxRate = 1;
};