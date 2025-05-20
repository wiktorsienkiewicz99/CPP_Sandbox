//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#include "Pillar.h"

#include <iostream>

EncapsulationGameCharacter::EncapsulationGameCharacter(int maxHealth) : mMaxHealth(maxHealth), mHealth(maxHealth) {}

void EncapsulationGameCharacter::dealDamage(int damage) {
    mHealth -= damage;
}

void EncapsulationGameCharacter::heal(int healAmount) {
    mHealth += healAmount;
}

void EncapsulationGameCharacter::printHealth() const {
    std::cout << "Health: " << mHealth << "\n";
}

void performBattle(AbstractCharacter* attacker, AbstractCharacter* defender) {
    std::cout << attacker->getName() << " vs " << defender->getName() << std::endl;
    attacker->attack(defender);
}

void playerInteractsWith(PolymorphismInteractable* object) {
    std::cout << "Interacting with: " << object->getName() << std::endl;
    object->interact();  // <-- polymorphic call
}




