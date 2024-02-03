#include <iostream>
using namespace std;
class book
{
    string author, title, publisher;
    float price;
    int stockpst;
    static int a;

public:
    book()
    {
        cout << "\t\tEnter the detail for stock." << a << endl;
        cout << "Title:";
        cin >> title;
        cout << "Author name:";
        cin >> author;
        cout << "Publisher:";
        cin >> publisher;
        cout << "Price:";
        cin >> price;
        cout << "Quantity of item:";
        cin >> stockpst;
        a++;
    }
    string gettitle()
    {
        return title;
    }
    string getauthor()
    {
        return author;
    }
    float getprice()
    {
        return price;
    }
    int getstock()
    {
        return stockpst;
    }
    void setstock(int a)
    {
        stockpst = stockpst - a;
    }
    void displayDetail()
    {
        cout << "Title=" << title << endl
             << "Authro Name=" << author << endl
             << "Price=" << price << endl
             << "Publisher=" << publisher << endl
             << "Stock position=" << stockpst << endl;
    }
};
int book::a = 1;
int main()
{
    int x;
    cout << "Enter the number of Stock You want to add:";
    cin >> x;
    book b[x];
    while (true)
    {
        string title, author;
        cout << "Enter the title of the book you want to search:";
        cin >> title;
        cout << "Enter the author name whose book you want to search:";
        cin >> author;
        for (int i = 0; i < x; i++)
        {
            if (b[i].gettitle() == title && b[i].getauthor() == author)
            {
                if (b[i].getstock() == 0)
                {
                    cout << "\t\tSorry all books of this stock had been sold !" << endl;
                    break;
                }
                cout << "\t-:-The book is available-:-\n";
                cout << "\t\t-:Details:-\n";
                b[i].displayDetail();
                int a;
                cout << "\nHow much book you want:";
                cin >> a;
                if (a > b[i].getstock())
                {
                    cout << "The avaible book are only " << b[i].getstock() << endl;
                    string ask;
                    cout << "Do you want to Buy " << b[i].getstock() << " book:";
                    cin >> ask;
                    if (ask == "yes" || ask == "Yes")
                    {
                        cout << "\n\n"
                             << "Pay " << b[i].getprice() * b[i].getstock() << " rupees" << endl;
                        b[i].setstock(b[i].getstock());

                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << "\n\n"
                     << "Pay " << b[i].getprice() * a << " rupees" << endl;

                b[i].setstock(a);
                break;
            }
            else if (i == x - 1)
            {
                cout << "\t\t-:-The book is not available-:-\n";
            }
        }
        cout << "\t\tThanks for visiting!\n\n";
        for (int i = 0; i < x; i++)
        {
            if (b[i].getstock() != 0)
            {
                goto out;
            }
        }
            cout << "All stocks are empty" << endl;
            goto end;
    out:;
    }
end:;
}
