#include <string>
#include <iostream>

enum class TypeOfMonster
{
    Ogre,
    Dragon,
    Orc,
    GiantEnemySpider,
    Slime
};

struct Monster
{
    TypeOfMonster type{};
    std::string name{};
    int hp{};
};

std::string getMonsterTypeString(TypeOfMonster type)
{
    switch (type)
    {
    case TypeOfMonster::Ogre:
        return "Ogre";
    case TypeOfMonster::Dragon:
        return "Dragon";
    case TypeOfMonster::Orc:
        return "Orc";
    case TypeOfMonster::GiantEnemySpider:
        return "Giant Enemy Spider";
    case TypeOfMonster::Slime:
        return "Slime";
    }
    return "Unknown";
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeString(monster.type) <<
        " is named " << monster.name << " and has " << monster.hp << " HP.";
}

int main()
{
    Monster ogre{ TypeOfMonster::Ogre, "Torg", 145 };
    Monster slime{ TypeOfMonster::Slime, "Blurp", 23 };
    
    printMonster(ogre);
    std::cout << std::endl;
    printMonster(slime);

    return 0;
}