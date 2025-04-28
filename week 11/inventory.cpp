#include <iostream>

class Inventory
{
private:
    std::string* items;
    int capacity;
    int counter;
public:
    Inventory(int max = 10): capacity(max), counter(0) { items = new std::string[capacity];}
    
    Inventory(const Inventory& other): capacity(other.capacity), counter(other.counter) {items = new std::string[capacity];
    for (int i = 0; i < counter; i++)
    {
        items[i] = other.items[i];
    }
    }
    ~Inventory(){
        delete[] items;
    }

    void addItem(const std::string& item) {
        if (counter < capacity)
        {
            items[counter++] = item;
        }
        else
        {
            std::cout << "There's no room for this." << std::endl;
        }
    }

    void showInv() const {
        for (int i = 0; i < counter; i++)
        {
            std::cout << i + 1 << ". " << items[i] << std::endl;
        }
        
    }

};

int main(){
    Inventory suitcase;
    suitcase.addItem("Tissue Box");
    suitcase.addItem("Black Gloves");

    Inventory altcase = suitcase;
    altcase.addItem("Band of 100s");

    std::cout << "\nDecoy SuitCase" << std::endl;
    suitcase.showInv();

    std::cout << "\nReal SuitCase" << std::endl;
    altcase.showInv();

    return 0;
}

