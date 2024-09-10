#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

// Class to represent a company
class Company {
public:
    char district[50];
    char address[50];
    char name[50];
    int unique;

    // Constructor to initialize company details
    Company() {
        cout << "\033[1;32m\n\n -------------------------------------------------------------------------------------- \n";
        // cout << "\t\t\t\n";
        cout << "\t\t\t\t\033[1;33mHELLO , \033[1;36mWELCOME TO E-WASTE MANAGEMENT SYSTEM\n";
        cout << " \033[1;32m------------------------------------------------------------------------------------------- \n\n";

        cout << "\033[1;37mPlease enter the name of your company: ";
        cin.ignore(); // Ignore newline character from previous input
        cin.getline(name, 50);
        cout << "Enter the district: ";
        cin.getline(district, 50);
        cout << "Enter the address: ";
        cin.getline(address, 50);
        cout << "Enter the unique id of your company: ";
        cin >> unique;
        cout << "\033[1;33mTHANK YOU!!\033[0m" << endl;
    }
};

// Class to represent an electronic waste item
class EwasteItem {
public:
    char itemName[50];
    char itemType[50];
    double weight;
    int quantity;

    // Constructor to initialize electronic waste item details
    EwasteItem() {
        cout << "\033[1;37mEnter item name: ";
        cin.ignore(); // Ignore newline character from previous input
        cin.getline(itemName, 50);
        cout << "Enter item type: ";
        cin.getline(itemType, 50);
        cout << "Enter item weight (in kilograms): ";
        cin >> weight;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "\033[1;33mItem added to inventory.\033[0m" << endl;
    }
};

int main() {
    vector<Company> companies; // Vector to store company details
    vector<EwasteItem> inventory; // Vector to store electronic waste items
    char choice;

    do {
        // Create a new company object
        Company company;
        companies.push_back(company);

        // Add electronic waste items to inventory
        cout << "\033[1;36mEnter details of electronic waste items:\n";
        do {
            EwasteItem item;
            inventory.push_back(item);

            cout << "Do you want to add more items? (y/n): ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');

        cout << "\033[1;37mDo you want to add entries for another company? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Display company details
    cout << "\033[1;34m\n\nCompany Details:\n";
    for (const auto& company : companies) {
        cout << "\033[1;37mCompany Name: " << company.name << endl;
        cout << "District: " << company.district << endl;
        cout << "Address: " << company.address << endl;
        cout << "Unique ID: " << company.unique << endl;
        cout << endl;
    }

    // Display inventory
    cout << "\033[1;35m\n\nElectronic Waste Inventory:\n";
    for (const auto& item : inventory) {
        cout << "\033[1;37mItem Name: " << item.itemName << endl;
        cout << "Item Type: " << item.itemType << endl;
        cout << "Weight: " << item.weight << " kg" << endl;
        cout << "Quantity: " << item.quantity << endl;
        cout << endl;
    }

    return 0;
}
