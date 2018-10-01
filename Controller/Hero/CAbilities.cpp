#include "CAbilities.hpp"

#include "sstream"

CAbilities::CAbilities(CHero& parent)
    : mHero(parent)
    , mAbilities()
{

}

std::string CAbilities::toString() const
{
    std::stringstream ss;
    for(size_t i = 0; i < mAbilities.size(); ++i)
    {
       ss << "ITEM <" << i << ">/n"
          << mAbilities[i].toString();
    }
    return ss.str();
}
