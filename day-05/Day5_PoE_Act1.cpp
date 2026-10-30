#include <iostream>
#include <string>
#include <iomanip>
# include <conio.h>
using namespace std;

class Product
{
private:
    // 4th attribute - needed for your example output
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    Product(); // default constructor

    // Setters with validation
    void setProductCode(string cd);
    void setProductName(string nm);
    void setPrice(double pr);
    void setQuantityInStock(int qty);
    void setProduct(string cd, string nm, double pr, int qty); // set all at once

    // Getters
    string getProductCode();
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

// Default constructor
Product::Product()
{
    productCode = "";
    productName = "";
    price = 0.0;
    quantityInStock = 0;
}

// Setters
void Product::setProductCode(string cd)
{
    if (cd != "")
        productCode = cd;
    else
        productCode = "UNKNOWN";
}

void Product::setProductName(string nm)
{
    if (nm != "") // validation: cannot be empty string
        productName = nm;
    else
        productName = "No Name";
}

void Product::setPrice(double pr)
{
    if (pr >= 0) // validation: not negative
        price = pr;
    else
        price = 0;
}

void Product::setQuantityInStock(int qty)
{
    if (qty >= 0) // validation: not negative
        quantityInStock = qty;
    else
        quantityInStock = 0;
}

void Product::setProduct(string cd, string nm, double pr, int qty)
{
    setProductCode(cd);
    setProductName(nm);
    setPrice(pr);
    setQuantityInStock(qty);
}

// Getters
string Product::getProductCode() { return productCode; }
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }

// Main program requirements - Page 16
int main()
{
    cout << fixed << setprecision(2);

    // 1. Create Product object using default constructor
    Product p1;

    // 2. Use setter methods to assign values
    p1.setProduct("P101", "Wireless Mouse", 249.99, 15);

    // 3. Use getter methods to display
    cout << "Product Code: " << p1.getProductCode() << endl;
    cout << "Product Name: " << p1.getProductName() << endl;
    cout << "Price: R" << p1.getPrice() << endl;
    cout << "Quantity in Stock: " << p1.getQuantityInStock() << endl;

    // 4. Test with at least two different sets (second product - testing validation)
    Product p2;
    p2.setProductCode("P102");
    p2.setProductName(""); // invalid - should become "No Name"
    p2.setPrice(-100); // invalid - should become 0
    p2.setQuantityInStock(-5); // invalid - should become 0

    cout << "\n--- Second Test (validation check) ---" << endl;
    cout << "Product Code: " << p2.getProductCode() << endl;
    cout << "Product Name: " << p2.getProductName() << endl;
    cout << "Price: R" << p2.getPrice() << endl;
    cout << "Quantity in Stock: " << p2.getQuantityInStock() << endl;

    // Third test - valid second product
    Product p3;
    p3.setProduct("P103", "Keyboard", 499.50, 30);
    cout << "\n--- Third Test ---" << endl;
    cout << "Product Code: " << p3.getProductCode() << endl;
    cout << "Product Name: " << p3.getProductName() << endl;
    cout << "Price: R" << p3.getPrice() << endl;
    cout << "Quantity in Stock: " << p3.getQuantityInStock() << endl;

    _getch();

    return 0;
}
