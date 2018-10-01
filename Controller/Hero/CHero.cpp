#include "CHero.hpp"

CHero::CHero()
    : mAttributes(*this)
    , mAbilities(*this)
    , mEquipment(*this)
    , mInventory(*this)
{

}

void CHero::enterName(const std::string& name)
{
    mAttributes.setName(name);
}

const CAttributes& CHero::getAttributtes() const
{
    return mAttributes;
}
