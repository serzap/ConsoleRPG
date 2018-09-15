#include "CAttributes.hpp"

CAttributes::CAttributes(CHero& parent)
    : mHero(parent)
    , mName("")
    , mCurrHealthPoints(0)
    , mMaxHealthPoints(0)
    , mCurrManaPoints(0)
    , mMaxManaPoints(0)
    , mArmor(0)
    , mMagicResist(0)
    , mCurrLevel(1)
    , mMaxLevel(1)
    , mCurrExp(0)
    , mNextExp(0)
    , mGold(0)
{

}
