#include <string>
#include <iostream>

#include "Logger/Logger.h"
#include "Increment/Increment.h"
#include "Variables/Variables.h"

#define INCREMENT(a) a++



int main() {
    //remindVariableSizes();
    Logger::SetState(Logger::INFO);
#pragma region
    /*
     * References reminder section
     */
    int b = 2;
    Logger::Log(b);
    int* b_ptr = &b; // here & is near variable meaning that it's the address
    Logger::Log(b_ptr);
    int& b_ref = b; // & is next to a type, so it's a reference. In fact, it is like variable alias, sth like macro. It does not duplicate the variable
    Logger::Log(b_ref);
    b_ref = 3;
    Logger::Log(b);

    int c = 0;
    Logger::Log(c);
    int& c_ref = c;
    Logger::Info("Variable incrementation");
    INCREMENT(c);
    Logger::Log(c);
    Logger::Log(c_ref);
    Logger::Warning("_ref incrementation");
    INCREMENT(c_ref);
    Logger::Log(c);
    Logger::Log(c_ref);

    c = 0;
    Logger::Info("--Increment no ref--");
    IncrementBasic(c);
    Logger::Warning("Original: ");
    Logger::Log(c);
    Logger::Info("--Increment with ref--");
    IncrementPointerReference(&c);
    Logger::Warning("Original: ");
    Logger::Log(c);
    Logger::SetState(Logger::WARNING);
    c = 0;
    Logger::Info("--Increment with ref--");
    IncrementReference(c);
    Logger::Info("Original: ");
    Logger::Log(c);

    /*
     * int a = 3;
     * int b = 5;
     * int& ref = a;
     * ref = b; // results in a = 5, b = 5
     * //to change reference
     * int* ref = &a;
     * *ref = 1; //a = 1
     * ref = &b;
     * *ref = 2 //b = 2
     */
#pragma endregion
    return 0;
}
