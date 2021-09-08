#include "Item.h"
#include <iostream>
using namespace std;

item::item(){
  itemCode = 0;
  unitPrice = 0;
}

item::item(int pitemcode,float punitprice){
  itemcode = pitemcode;
  unitprice = punitprice;
}

item::item(){
  cout<<"Destructor Called"<< endl;
}
// 4. Implement Default Constructor Implementation
// 5. Implement Overloaded Constructor Implementation
// 6. Implement Destructor (display "Destructor Called")

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
