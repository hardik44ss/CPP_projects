#include <iostream>
#include <string>
using namespace std;

class books
{
private:
    string title, author, publisher;
    int quantity, price;

public:
    books()
    {
        cout << "\nEnter Book Title : ";
        cin >> title;
        cout << "Enter Book Author : ";
        cin >> author;
        cout << "Enter Book Publisher : ";
        cin >> publisher;
        cout << "Enter Book Quantity : ";
        cin >> quantity;
        cout << "Enter the price of the book : ";
        cin >> price;
    }
    bool chktitauth(string tit, string auth)
    {
        if (tit == title && auth == author)
        {
            return true;
        }
        return false;
    }
    void setquantity(int a)
    {
        quantity = quantity - a;
    }
    int getquantity()
    {
        return quantity;
    }
    int getprice()
    {
        return price;
    }
};

int main()
{
    int n;
    cout << "Enter number of Entries : ";
    cin >> n;
    books ob[n];
    string tit, auth;

    while (1)
    {
        cout << "\n\nEnter title of the book : ";
        cin >> tit;
        cout << "Enter title of the Author : ";
        cin >> auth;
        for (int i = 0; i < n; i++)
        {
            if (ob[i].chktitauth(tit, auth))
            {
                int qnty;
                cout << "Book is available " << endl;
                cout << "Enter  the quantity you want to buy: ";
                cin >> qnty;
                if (qnty > ob[i].getquantity())
                {
                    int remain = qnty - ob[i].getquantity();
                    cout << "Sorry! The required quantity is not available." << endl;
                    cout << "Only " << remain << " is available " << endl;
                    cout << "Do you want to buy " << remain << " item  ?Y/N : ";
                    char c;
                    cin >> c;
                    if (c == 'Y' || c == 'y')
                    {
                        cout << "Price of " << remain << " Book is : " << remain * ob[i].getprice() << endl;
                        ob[i].setquantity(qnty);
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    cout << "Required number of books is available ," << endl
                         << "Price of Books : " << qnty * ob[i].getprice() << endl;
                    ob[i].setquantity(qnty);
                }
            }
            else
            {
                cout << "Book is unavailable ." << endl;
            }
        }
    }

    return 0;
}
