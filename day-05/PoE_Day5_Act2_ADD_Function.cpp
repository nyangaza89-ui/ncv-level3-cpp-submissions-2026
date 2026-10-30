#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Product
{
private:
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
    void setProduct(string cd, string nm, double pr, int qty);

    // Getters
    string getProductCode();
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

Product::Product()
{
    productCode = "";
    productName = "";
    price = 0.0;
    quantityInStock = 0;
}

void Product::setProductCode(string cd)
{
    if (cd != "") productCode = cd;
    else productCode = "UNKNOWN";
}
void Product::setProductName(string nm)
{
    if (nm != "") productName = nm;
    else productName = "No Name";
}
void Product::setPrice(double pr)
{
    if (pr >= 0) price = pr;
    else price = 0;
}
void Product::setQuantityInStock(int qty)
{
    if (qty >= 0) quantityInStock = qty;
    else quantityInStock = 0;
}
void Product::setProduct(string cd, string nm, double pr, int qty)
{
    setProductCode(cd);
    setProductName(nm);
    setPrice(pr);
    setQuantityInStock(qty);
}

string Product::getProductCode() { return productCode; }
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }

// ===================== EXIT TICKET FUNCTIONS ADDED =====================

// 1. GetProductData - receives a product object and populate it with user provided data
void GetProductData(Product &p)
{
    string code, name;
    double pr;
    int qty;

    cout << "Enter Product Code: ";
    getline(cin, code);
    cout << "Enter Product Name: ";
    getline(cin, name);
    cout << "Enter Price: R";
    cin >> pr;
    cout << "Enter Quantity in Stock: ";
    cin >> qty;
    cin.ignore(); // clear buffer

    p.setProduct(code, name, pr, qty);
}

// 2. DisplayProduct - receives a product object and displays all product data
void DisplayProduct(Product p)
{
    cout << fixed << setprecision(2);
    cout << "--------------------------" << endl;
    cout << "Product Code: " << p.getProductCode() << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << p.getPrice() << endl;
    cout << "Quantity in Stock: " << p.getQuantityInStock() << endl;
    cout << "--------------------------" << endl;
}

// 3. prodCompare - receives two products and checks if names start with same character
void prodCompare(Product p1, Product p2)
{
    string n1 = p1.getProductName();
    string n2 = p2.getProductName();

    if (n1.empty() || n2.empty())
    {
        cout << "Cannot compare - one product name is empty." << endl;
        return;
    }

    char c1 = tolower(n1[0]);
    char c2 = tolower(n2[0]);

    if (c1 == c2)
        cout << "Both product names start with the same character '" << n1[0] << "'." << endl;
    else
        cout << "Product names start with different characters ('" << n1[0] << "' vs '" << n2[0] << "')." << endl;
}

// ===================== MAIN FOR POE =====================
int main()
{
    Product prod1, prod2;

    cout << "=== Enter details for Product 1 ===" << endl;
    GetProductData(prod1);

    cout << "\n=== Enter details for Product 2 ===" << endl;
    GetProductData(prod2);

    cout << "\n=== Displaying Products ===" << endl;
    cout << "\nProduct 1:" << endl;
    DisplayProduct(prod1);
    cout << "\nProduct 2:" << endl;
    DisplayProduct(prod2);

    cout << "\n=== Comparison ===" << endl;
    prodCompare(prod1, prod2);

    return 0;
}
