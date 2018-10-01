#ifndef CONTROLLER_ABILITY_TYPE_CABILITY
#define CONTROLLER_ABILITY_TYPE_CABILITY

#include <string>

class AbilityType
{
public:
typedef enum
{
    CriticalPunch,
    SunStrike,
    None
}type;

static std::string toString(type type)
{
   std::string res = "";
    switch(type)
    {
    case type::CriticalPunch: res = "Critical Punch"; break;
    case type::SunStrike: res = "Sun Strike"; break;
    case type::None: res = "None"; break;
    }
    return res;
}

};

class DamageType
{
public:
    typedef enum
    {
        Magical,
        Physical,
        None
    }type;

    static std::string toString(type type)
    {
       std::string res = "";
        switch(type)
        {
        case type::Physical: res = "Physical"; break;
        case type::Magical: res = "Magical"; break;
        case type::None: res = "None"; break;
        }
        return res;
    }
};

class CAbility
{
public:
    CAbility();
    CAbility(AbilityType::type abilityType, DamageType::type damageType, std::string name, int manaCost, int damage, int level);

    AbilityType::type getAbilityType() const;
    void setAbilityType(const AbilityType::type& type);
    DamageType::type getDamageType() const;
    void setDamageType(const DamageType::type& type);
    std::string getName() const;
    void setName(const std::string& name);
    int getManaCost() const;
    void setManaCost(const int& manaCost);
    int getDamage() const;
    void setDamage(const int& damage);
    int getLevel() const;
    void setLevel(const int& level);

    std::string toString() const;

protected:
    AbilityType::type mAbilityType;
    DamageType::type mDamageType;
    std::string mName;
    int mManaCost;
    int mDamage;
    int mLevel;
};

inline AbilityType::type CAbility::getAbilityType() const
{
    return mAbilityType;
}

inline void CAbility::setAbilityType(const AbilityType::type& type)
{
    mAbilityType = type;
}

inline DamageType::type CAbility::getDamageType() const
{
    return mDamageType;
}

inline void CAbility::setDamageType(const DamageType::type& type)
{
    mDamageType = type;
}

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
