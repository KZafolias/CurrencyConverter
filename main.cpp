#include <iostream>
using namespace std;

int main() {
    string currencyfrom, currencyto;
    double eur, usd, yen, pound;

    cout << "type your currency you want to convert from" << endl;
    cin >> currencyfrom;
    cout << "type your currency you want to convert to" << endl;
    cin >> currencyto;
    //from euro to other
    if (currencyfrom == "eur" || currencyto == "yen") {
        cout << "type the amout in eur" << endl;
        cin >> eur;
        cout << eur * 132.53 << endl;
    }

    else if(currencyfrom == "eur" || currencyto == "usd") {
        cout << "type the amout in eur" << endl;
        cin >> eur;
        cout << eur * 1.16 << endl;

    }
    else if(currencyfrom == "eur" || currencyto == "pound") {
        cout << "type the amout in eur" << endl;
        cin >> eur;
        cout << eur * 0.84 << endl;
    }
    //from usd to other
    else if(currencyfrom == "usd" || currencyto == "eur") {
        cout << "type the amout in usd" << endl;
        cin >> usd;
        cout << usd * 0.86 << endl;

    }
    else if(currencyfrom == "usd" || currencyto == "yen") {
        cout << "type the amout in usd" << endl;
        cin >> usd;
        cout << usd * 114.38 << endl;

    }
    else if(currencyfrom == "usd" || currencyto == "pound") {
        cout << "type the amout in usd" << endl;
        cin >> usd;
        cout << usd * 0.73 << endl;
    }
    //from yen to other
    else if(currencyfrom == "yen" || currencyto == "eur") {
        cout << "type the amout in yen" << endl;
        cin >> usd;
        cout << usd * 0.0075 << endl;
    }
    else if(currencyfrom == "yen" || currencyto == "usd") {
        cout << "type the amout in yen" << endl;
        cin >> usd;
        cout << usd * 0.0088 << endl;
    }
    else if(currencyfrom == "yen" || currencyto == "pound") {
        cout << "type the amout in yen" << endl;
        cin >> usd;
        cout << usd * 0.0064 << endl;
    }
    //from pound to other
    else if(currencyfrom == "yen" || currencyto == "pound") {
        cout << "type the amout in yen" << endl;
        cin >> usd;
        cout << usd * 0.0064 << endl;
    }
    else if(currencyfrom == "pound" || currencyto == "eur") {
        cout << "type the amout in pound" << endl;
        cin >> usd;
        cout << usd * 1.18 << endl;
    }
    else if(currencyfrom == "pound" || currencyto == "usd") {
        cout << "type the amout in pound" << endl;
        cin >> usd;
        cout << usd * 1.37 << endl;
    }
    else if(currencyfrom == "pound" || currencyto == "yen") {
        cout << "type the amout in pound" << endl;
        cin >> usd;
        cout << usd * 1.37 << endl;
    }
}
