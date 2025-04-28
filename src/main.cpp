// Include custom modules
#include "Logger/Logger.h"
#include "Increment/Increment.h"
#include "Variables/Variables.h"

// Macro definition for simple incrementation
#define INCREMENT(a) a++

int main() {
    // Optionally remind sizes of basic variable types (currently commented out)
    // remindVariableSizes();

    // Set the Logger to INFO level (lowest severity → all messages are shown)
    Logger::SetState(Logger::INFO);

#pragma region References Reminder Section
    /*
     * Section: References reminder
     * Purpose: Practice how references and pointers behave.
     */

    // Basic integer variable
    int b = 2;
    Logger::Log(b); // Log the value of 'b'

    // Pointer to 'b'
    int* b_ptr = &b; // '&' near variable means "address of variable"
    Logger::Log(b_ptr); // Logs memory address

    // Reference to 'b'
    int& b_ref = b; // '&' near type means "reference (alias) to variable"
    Logger::Log(b_ref); // Logs value of 'b' via reference

    // Changing the reference changes the original variable
    b_ref = 3;
    Logger::Log(b); // Now b == 3

    // New integer variable
    int c = 0;
    Logger::Log(c);

    // Reference to 'c'
    int& c_ref = c;

    Logger::Info("Variable incrementation using macro");

    // Use macro to increment c
    INCREMENT(c);
    Logger::Log(c);      // Should be 1
    Logger::Log(c_ref);  // Reference shows updated value too (still 1)

    Logger::Warning("Reference (_ref) incrementation");

    // Increment via reference
    INCREMENT(c_ref);
    Logger::Log(c);      // Should be 2
    Logger::Log(c_ref);  // Should be 2

#pragma endregion

#pragma region Increment functions demo
    /*
     * Section: Increment function testing
     * Purpose: Compare behavior when passing variables by value, pointer, or reference.
     */

    c = 0; // Reset c
    Logger::Info("-- Increment without reference --");
    IncrementBasic(c); // Pass by value (copy)
    Logger::Warning("Original after IncrementBasic: ");
    Logger::Log(c); // 'c' remains 0 (because pass by value doesn't modify original)

    Logger::Info("-- Increment with pointer reference --");
    IncrementPointerReference(&c); // Pass pointer (address)
    Logger::Warning("Original after IncrementPointerReference: ");
    Logger::Log(c); // 'c' becomes 1 (because pointer modifies original)

    Logger::SetState(Logger::WARNING); // Raise minimum logger level to WARNING (hides INFO now)

    c = 0; // Reset c again
    Logger::Error("-- Increment with direct reference --"); // Won't be printed now
    IncrementReference(c); // Pass by reference
    Logger::Info("Original after IncrementReference: ");  // Also won't print (INFO hidden)
    Logger::Log(c); // Will be printed only if it reaches WARNING level (depending on your Log logic)

#pragma endregion

#pragma region Bonus Reminder
    /*
     * Quick reminder:
     *
     * int a = 3;
     * int b = 5;
     * int& ref = a;   // ref is an alias for a
     * ref = b;        // a becomes 5, b remains 5
     *
     * To rebind references (normally not possible directly):
     * int* ref = &a;  // ref is a pointer to a
     * *ref = 1;      // a becomes 1
     * ref = &b;      // now ref points to b
     * *ref = 2;      // b becomes 2
     */
#pragma endregion

    return 0;
}