#ifndef CONTROLLER_HERO_CATTRIBUTES_HPP
#define CONTROLLER_HERO_CATTRIBUTES_HPP

#include <string>

class CHero;

class CAttributes
{
public:
    CAttributes(CHero& parent);

    //Getters and Setters
    std::string getName() const;
    void setName(const std::string& name);

    int getCurrHealthPoints() const;
    void setCurrHealthPoints(const int& hp);
    int getMaxHealthPoints() const;
    void setMaxHealthPoints(const int& hp);
    int getCurrManaPoints() const;
    void setCurrManaPoints(const int& mp);
    int getMaxManaPoints() const;
    void setMaxManaPoints(const int& mp);

    int getArmor() const;
    void setArmor(const int& armor);
    int getMagicResist() const;
    void setMagicResist(const int& resist);

    int getCurrLevel() const;
    void setCurrLevel(const int& lvl);
    int getMaxLevel() const;
    void setMaxLevel(const int& lvl);
    int getCurrExp() const;
    void setCurrExp(const int& exp);
    int getNextExp() const;
    void setNextExp(const int& exp);
    int getGold() const;
    void setGold(const int& gold);

private:
    //member variables
    CHero& mHero;

    std::string mName;

    int mCurrHealthPoints;
    int mMaxHealthPoints;
    int mCurrManaPoints;
    int mMaxManaPoints;

    int mArmor;
    int mMagicResist;

    int mCurrLevel;
    int mMaxLevel;
    int mCurrExp;
    int mNextExp;

    int mGold;
};

inline std::string CAttributes::getName() const
{
    return mName;
}

inline void CAttributes::setName(const std::string& name)
{
    mName = name;
}

inline int CAttributes::getCurrHealthPoints() const
{
    return mCurrHealthPoints;
}

inline void CAttributes::setCurrHealthPoints(const int& hp)
{
    mCurrHealthPoints = hp;
}

inline int CAttributes::getMaxHealthPoints() const
{
    return mMaxHealthPoints;
}

inline void CAttributes::setMaxHealthPoints(const int& hp)
{
    mMaxHealthPoints = hp;
}

inline int CAttributes::getCurrManaPoints() const
{
    return mCurrManaPoints;
}

inline void CAttributes::setCurrManaPoints(const int& mp)
{
    mCurrManaPoints = mp;
}

inline int CAttributes::getMaxManaPoints() const
{
    return mMaxManaPoints;
}

inline void CAttributes::setMaxManaPoints(const int& mp)
{
    mMaxManaPoints = mp;
}

inline int CAttributes::getArmor() const
{
    return mArmor;
}

inline void CAttributes::setArmor(const int& armor)
{
    mArmor = armor;
}

inline int CAttributes::getMagicResist() const
{
    return mMagicResist;
}

inline void CAttributes::setMagicResist(const int& resist)
{
    mMagicResist = resist;
}

inline int CAttributes::getCurrLevel() const
{
    return mCurrLevel;
}

inline void CAttributes::setCurrLevel(const int& lvl)
{
    mCurrLevel = lvl;
}

inline int CAttributes::getMaxLevel() const
{
    return mMaxLevel;
}

inline void CAttributes::setMaxLevel(const int& lvl)
{
    mMaxLevel = lvl;
}

inline int CAttributes::getCurrExp() const
{
    return mCurrExp;
}

inline void CAttributes::setCurrExp(const int& exp)
{
    mCurrExp = exp;
}

inline int CAttributes::getNextExp() const
{
    return mNextExp;
}

inline void CAttributes::setNextExp(const int& exp)
{
    mNextExp = exp;
}

inline int CAttributes::getGold() const
{
    return mGold;
}

inline void CAttributes::setGold(const int& gold)
{
    mGold = gold;
}

#endif // CONTROLLER_HERO_CATTRIBUTES_HPP
