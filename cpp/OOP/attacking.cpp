#include <iostream>
class Character {
protected:
    int health_;
    int attack_;
public:
    Character(int health, int attack): health_(health), attack_(attack) {}

    virtual void takeDamage(int damage) {
        health_ -= damage;
        if (health_ <= 0) {
            // Handle death (e.g., print message)
            std::cout << "Character is defeated!" << std::endl;
        }
    }
    virtual void attack(Character& target) {
        target.takeDamage(attack_);
    }
};
class Monster : public Character {
public:
    Monster(int health, int attack, std::string name) : Character(health, attack), name_(name){}
private:
    std::string name_;
};
class Hero : public Character {
public:
    Hero(int health, int attack, std::string name) : Character(health, attack), name_(name) {}
private:
    std::string name_;
};
