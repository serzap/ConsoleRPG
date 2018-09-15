#ifndef CONTROLLER_ITEM_CITEM_HPP
#define CONTROLLER_ITEM_CITEM_HPP

#include <string>

class CItem
{
public:
    CItem();
    CItem(std::string name, int buyPrice, int sellPrice);

private:
   std::string mName;
   int mBuyPrice;
   int mSellPrice;
};

#endif // CONTROLLER_ITEM_CITEM_HPP
