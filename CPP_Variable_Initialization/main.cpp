#include <iostream> // Input/Output Library


int main() {
    int width; // Declaration
    int width = 5; // Declaration and Initialization (Copy Initialization)
    /*
        Copy initialization happens when you initialize an object by assigning a value using the = sign. This form typically involves calling the copy constructor of the class. 
        It is used for both fundamental types and class types.
        In the context of class types, copy initialization can be less efficient than direct initialization because it may involve extra copy or move operations, 
        although compilers can often optimize these away.
    */

    int height(5); // Declaration and Initialization (Direct Initialization)
    /*
        Direct initialization is more straightforward and is performed by directly passing the initial value(s) to the constructor of an object within parentheses.
        For class types, direct initialization is generally more efficient than copy initialization because it can invoke the constructor directly without the potential for additional copy or move operations.
    */

    int depth{5}; // Declaration and Initialization (Uniform Initialization or Direct List Initialization)
    /*
        Direct list initialization is a form of initialization that uses curly braces {}. It can be used with both fundamental types and class 
        types and is favored for its ability to initialize complex objects and arrays. It also provides uniform initialization syntax.
    */

    int ergonomics = { 5 }; // Declaration and Initialization (Copy List Initialization);
    /*
        Copy list initialization is similar to copy initialization but uses curly braces. It happens in contexts like function argument passing, return statements, or when initializing with a brace-enclosed list.
        The primary difference between direct list initialization and copy list initialization is in how explicit constructors are treated. Copy list initialization will not call an explicit constructor, whereas direct list initialization can.
    */


    int f {}; // Initialization (Value Initialization)

    /* Those are all valid too
    int a = 5, b = 6;          // copy initialization
    int c( 7 ), d( 8 );        // direct initialization
    int e { 9 }, f { 10 };     // direct brace initialization
    int g = { 9 }, h = { 10 }; // copy brace initialization
    int i {}, j {};           // value initialization
    */

   [[maybe_unused]] int i = 5; // Suppresses warning about unused variable

    return 0;
}

/*
Copy initialization had fallen out of favor in modern C++ due to being less efficient than other forms of initialization for some complex types. 
However, C++17 remedied the bulk of these issues, and copy initialization is now finding new advocates.  You will also find it used in older code 
(especially code ported from C), or by developers who simply think it looks more natural and is easier to read.
*/