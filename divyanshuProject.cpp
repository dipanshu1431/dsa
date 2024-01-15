#include <iostream>
#include <string>
using namespace std;

class RentalItem
{
private:
    int itemID;
    string name;
    string type;
    float rentalPrice;
    bool available;

public:
    RentalItem(int id, string itemName, string itemType, float price)
    {
        itemID = id;
        name = itemName;
        type = itemType;
        rentalPrice = price;
        available = true;
    }
    void displayItem()
    {
        cout << "Item ID: " << itemID << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Rental price per day: " << rentalPrice << endl;
        cout << "Availability: " << (available ? "Available" : "Not available") << endl;
    }
    bool getAvailability()
    {
        return available;
    }
    void setAvailability(bool value)
    {
        available = value;
    }
    float calculateRentalPrice(int days)
    {
        return rentalPrice * days;
    }
};

class RentalSystem
{
private:
    RentalItem *items[100];
    int itemCount;

public:
    RentalSystem()
    {
        itemCount = 0;
    }
    void addItem(RentalItem *item)
    {
        items[itemCount] = item;
        itemCount++;
    }
    void displayItems()
    {
        cout << "List of available items:" << endl;
        for (int i = 0; i < itemCount; i++)
        {
            if (items[i]->getAvailability())
            {
                items[i]->displayItem();
            }
        }
    }
    void rentItem(int itemID, int days)
    {
        for (int i = 0; i < itemCount; i++)
        {
            if (items[i]->getAvailability() )
            {
                items[i]->setAvailability(false);
                float rentalPrice = items[i]->calculateRentalPrice(days);
                cout << "Item rented successfully. Total rental price: " << rentalPrice << endl;
                return;
            }
        }
        cout << "Item not available for rent." << endl;
    }
};