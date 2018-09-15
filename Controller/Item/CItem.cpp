#include "CItem.hpp"

CItem::CItem()
    : mName("")
    , mBuyPrice(0)
    , mSellPrice(0)
{

}

CItem::CItem(std::string name, int buyPrice, int sellPrice)
    : mName(name)
    , mBuyPrice(buyPrice)
    , mSellPrice(sellPrice)
{

}
