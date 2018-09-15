#include <iostream>

#include "CInventory.hpp"

CInventory::CInventory(CHero& parent)
    : mHero(parent)
    , mItems()
{

}

void CInventory::addItem(CItem * item)
{

    mItems.push_back(item);
    std::cout << "Item to " << getSize() << " slot was added" << std::endl;
}

void CInventory::removeItem(int pos)
{
    if( false == isEmpty() )
    {
        mItems.erase(mItems.begin() + pos);
        std::cout << "Item from " << pos+1 << " slot was removed" << std::endl;
    }
    else
    {
        std::cout << "No items to remove" << std::endl;
    }
}

void CInventory::removeItem(CItem * item)
{
    if( false == isEmpty() )
    {
        int foundPos = findItem(item);
        if ( -1 != foundPos )
        {
            mItems.erase(mItems.begin() + foundPos);
            std::cout << "Item from " << foundPos+1 << " slot was removed" << std::endl;
        }
    }
    else
    {
        std::cout << "No items to remove" << std::endl;
    }
}

int CInventory::findItem(CItem * item)
{
    int foundItemPos = -1;
    int currItemPos = 0;
    bool isItemFound = false;
    for (auto it : mItems)
    {
        if (it == item)
        {
          isItemFound = true;
          break;
        }
        ++currItemPos;
    }
    return foundItemPos;
}
