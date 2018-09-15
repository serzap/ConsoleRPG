#ifndef CONTROLLER_HERO_CINVENTORY_HPP
#define CONTROLLER_HERO_CINVENTORY_HPP

#include <vector>

#include "../Item/CItem.hpp"

class CHero;

class CInventory
{
public:
    CInventory(CHero& parent);

    int getSize() const;
    int getCapacity() const;
    void setCapacity(const int& cap);
    bool isEmpty() const;

    void addItem(CItem * item);
    void removeItem(int pos);
    void removeItem(CItem * item);
    int findItem(CItem * item);

private:
    CHero& mHero;
    std::vector<CItem *> mItems;
    int mSize;
    int mCapacity;
};

inline int CInventory::getSize() const
{
    return mSize;
}

inline int CInventory::getCapacity() const
{
    return mCapacity;
}

inline void CInventory::setCapacity(const int& cap)
{
    mCapacity = cap;
}

inline bool CInventory::isEmpty() const
{
    return ( 0 == mSize );
}


#endif // CONTROLLER_HERO_CINVENTORY_HPP
