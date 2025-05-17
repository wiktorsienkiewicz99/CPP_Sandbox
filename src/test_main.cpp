#include <iostream>


#pragma region TEMPLATES
// GOAL: Write generic functions that work with any type
// Function templates allow to write a function that works with any data type
template<typename T>
T max(T a, T b) {
    return a > b ? a : b; // if a is grater then b return a else b
}
template<typename T>
T min(T a, T b) {
    return a < b ? a : b; // one line if
}

// Class templates allow to define classes that can operate on generic types.
template<typename T>
class Pair {
    public:
        Pair(T a, T b) : first(a), second(b)  {} //constructor with one line values setting
        void displayValues() const { // values doesn't change inside method so it can be constant
            std::cout << first << " " << second << std::endl;
        }
    private:
        T first;
        T second;
};

#pragma endregion

#pragma region INTERFACES
// GOAL: Create interface-like structures in C++
// C++ doesn't have a native interface keyword, but usage of abstract classes with pure virtual functions is a standard.
class Drawable {
public:
    virtual void draw() const = 0;  // pure virtual function
    virtual ~Drawable() = default; // Deconstructor
};

class Circle : public Drawable { // Class inheritance
public:
    void draw() const override { // have to override function as it is pure virtual
        std::cout << "Drawing a circle\n";
    }
};

class Shape {
    public:
        virtual void draw() const = 0;
        virtual ~Shape() = default;
};

class Rectangle : public Shape {
    public:
        void draw() const override {
        std::cout << "Drawing a Rectangle\n";
    }
};

class Triangle : public Shape {
    public:
        void draw() const override {
            std::cout << "Drawing a Triangle\n";
        }
};
#pragma endregion

#pragma region TEMPLATE INTERFACES
template<typename T>
class Logger {
    public:
        virtual void log(const T& a) = 0;
        virtual ~Logger() = default;
};

class ConsoleLogger : public Logger<std::string> {
    public:
        void log(const std::string& a) override {
            std::cout<< "LOG: " << a << std::endl;
        }
};

class FileLogger : public Logger <int> {
    public:
         void log(const int& a) override {
            std::cout<< "Saving file with ID: " << a << std::endl;
        }
};
#pragma endregion

#pragma region CONCEPTS
// Goal: Restrict template types using concepts
// Concepts define constraints on template parameters

template <typename T>
concept Arithmetic = std::is_arithmetic_v<T>;

template <Arithmetic T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
concept Printable = requires(std::ostream& os, T a)
{
    {os << a} -> std::same_as<std::ostream&>; // check if expression is valid, then checks if expression returns std::ostream&
};

template <Printable T>
void print(const T& value) {
    std::cout << "Value: " << value << std::endl;
}

#pragma endregion

int main() {

    std::cout << max(1, 2) << std::endl;
    std::cout << min(1, 2) << std::endl;
    Pair<int> p(6, 8);
    p.displayValues();


    Circle c;
    c.draw();
    Rectangle r;
    r.draw();
    Triangle t;
    t.draw();

    ConsoleLogger cLogger;
    std::string message = "Warning";
    cLogger.log(message);

    FileLogger fLogger;
    int fileID = 10;
    fLogger.log(fileID);

    print(10);
    print("TEST PRINT");
    struct NonPrintable {};
    //print(NonPrintable{});

    return 0;
}
