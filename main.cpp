#include <string>
#include <iostream>

//#include "Log.h"
#include "Variables.h"

#define LOG(message) (std::cout << message << std::endl)

#define INCREMENT(a) a++

void Increment_basic(int value) {
    LOG("Increment start");
    LOG(value);
    value++;
    LOG("Incremented: ");
    LOG(value);
}

void Increment(int* value) {
    LOG("Increment by ptr ref start");
    LOG(*value);
    (*value)++; // dereference first, then increment
    LOG("Incremented: ");
    LOG(*value);
}

void Increment(int& value) {
    LOG("Increment by ref start");
    LOG(value);
    value++; // dereference first, then increment
    LOG("Incremented: ");
    LOG(value);
}

int main() {
    //LOG("MACRO TEST");
    //remindVariableSizes();
#pragma region
    /*
     * Pointer reminder section
     */
    int a = 1;
    int *a_address_ptr = &a; //get an address
    void *ptr = 0; //not valid address
    ptr = nullptr; //valid address
    LOG(ptr);
    LOG(a_address_ptr);
    LOG(*a_address_ptr);

    //Pointers with memory allocation
    char* buffer = new char[10]; // one char is 1 byte of size, so we allocate 10 bytes
    LOG(buffer);
    memset(buffer, 4, 10); //set all bytes to 0 in the block of memory
    char** buffer_ptr = &buffer; //get a pointer to the block of memory

    delete[] buffer; //delete the block of memory
#pragma endregion


#pragma region
    /*
     * References reminder section
     */
    int b = 2;
    LOG(b);
    int* b_ptr = &b; // here & is near variable meaning that it's the address
    LOG(b_ptr);
    int& b_ref = b; // & is next to a type, so it's a reference. In fact, it is like variable alias, sth like macro. It does not duplicate the variable
    LOG(b_ref);
    b_ref = 3;
    LOG(b);

    int c = 0;
    LOG(c);
    int& c_ref = c;
    LOG("Variable incrementation");
    INCREMENT(c);
    LOG(c);
    LOG(c_ref);
    LOG("_ref incrementation");
    INCREMENT(c_ref);
    LOG(c);
    LOG(c_ref);

    c = 0;
    LOG("--Increment no ref--");
    Increment(&c);
    LOG("Original: ");
    LOG(c);
    LOG("--Increment with ref--");
    Increment(&c);
    LOG("Original: ");
    LOG(c);

    c = 0;
    LOG("--Increment with ref--");
    Increment(c);
    LOG("Original: ");
    LOG(c);

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
