#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>

class FoodItem
{
    public:
        int ID;
        //constructors
        FoodItem(int ID, std::string itemName, float itemPrice, int cal, int fat, 
                    int satFat, int carbs, int dietFiber, int sugars,
                    int protein);
        FoodItem(std::string itemName);
        FoodItem();

        //accessors
        int getID();
        std::string getName();
        int getPrice();
        int getCal();
        int getFat();
        int getSatFat();
        int getCarbs();
        int getDFiber();
        int getSugars();
        int getProtein();

        //mutators
        void setID(int itemID);
        void setName(std::string itemName);
        void setPrice(int itemPrice);
        void setCal(int itemCals);
        void setFat(int itemFat);
        void setSatFat(int itemSatFat);
        void setCarbs(int itemCarbs);
        void setDFiber(int itemDietFiber);
        void setSugars(int itemSugars);
        void setProtein(int itemProtein);

        

        
    private:
        std::string name;
        int price;  
        //will be calculated as price*100 because computers are
        //bad at floating point math
        int cal;
        int fat;
        int satFat;
        int carbs;
        int dietFiber;
        int sugars;
        int protein;

};

#endif //FOODITEM_H