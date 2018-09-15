#ifndef CONTROLLER_ABILITY_CABILITY
#define CONTROLLER_ABILITY_CABILITY

#include <string>

class CAbility
{
public:
    CAbility();
    CAbility(std::string name, int manaCost, int damage, int level);

    std::string getName() const;
    void setName(const std::string& name);
    int getManaCost() const;
    void setManaCost(const int& manaCost);
    int getDamage() const;
    void setDamage(const int& damage);
    int getLevel() const;
    void setLevel(const int& level);

private:
    std::string mName;
    int mManaCost;
    int mDamage;
    int mLevel;
};

inline std::string CAbility::getName() const
{
    return mName;
}

inline void CAbility::setName(const std::string& name)
{
    mName = name;
}

inline int CAbility::getManaCost() const
{
    return mManaCost;
}

inline void CAbility::setManaCost(const int& manaCost)
{
    mManaCost = manaCost;
}

inline int CAbility::getDamage() const
{
    return mDamage;
}

inline void CAbility::setDamage(const int& damage)
{
    mDamage = damage;
}

inline int CAbility::getLevel() const
{
    return mLevel;
}

inline void CAbility::setLevel(const int& level)
{
    mLevel = level;
}

#endif // CONTROLLER_ABILITY_CABILITY
