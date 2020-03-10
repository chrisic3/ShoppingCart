#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

class ItemToInput {
   public: 
       ItemToInput();
       void SetName(string name);
       string GetName() const;
       void SetPrice(int price);
       int GetPrice() const;
       void SetQuantity(int quantity);
       int GetQuantity() const;
  
   private:
       string itemName;
       int itemPrice;
       int itemQuantity;
};

#endif
