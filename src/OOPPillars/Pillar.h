//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#pragma once
#include <iostream>
#include <string>

class EncapsulationGameCharacter {
public:
    explicit EncapsulationGameCharacter(int maxHealth);
    void dealDamage(int damage);
    void heal(int healAmount);
    void printHealth() const;
private:
    int mMaxHealth;
    int mHealth;
};

class AbstractCharacter {
public:
    virtual void takeDamage(int amount) = 0;
    virtual void attack(AbstractCharacter* target) = 0;
    virtual std::string getName() const = 0;
    virtual ~AbstractCharacter() = default;

};

class Player : public AbstractCharacter {
private:
    int health;
    std::string name;
public:
    Player(std::string name) : name(name), health(100) {}

    void takeDamage(int amount) override {
        health -= amount;
        std::cout << name << " takes " << amount << " damage. Health: " << health << std::endl;
    }

    void attack(AbstractCharacter* target) override {
        std::cout << name << " attacks!" << std::endl;
        target->takeDamage(15);
    }

    std::string getName() const override { return name; }
};


class Goblin : public AbstractCharacter {
private:
    int health = 50;
public:
    void takeDamage(int amount) override {
        health -= amount;
        std::cout << "Goblin hit! Health now: " << health << std::endl;
    }

    void attack(AbstractCharacter* target) override {
        std::cout << "Goblin slashes!" << std::endl;
        target->takeDamage(10);
    }

    std::string getName() const override { return "Goblin"; }
};

void performBattle(AbstractCharacter* attacker, AbstractCharacter* defender);


class PolymorphismInteractable {
public:
    virtual void interact() = 0;
    virtual std::string getName() const = 0;
    virtual ~PolymorphismInteractable() = default;
};

class Door : public PolymorphismInteractable {
public:
    void interact() override {
        std::cout << "The door creaks open..." << std::endl;
    }

    std::string getName() const override {
        return "Door";
    }
};

class Chest : public PolymorphismInteractable {
public:
    void interact() override {
        std::cout << "You found 100 gold!" << std::endl;
    }

    std::string getName() const override {
        return "Treasure Chest";
    }
};

void playerInteractsWith(PolymorphismInteractable* object);

