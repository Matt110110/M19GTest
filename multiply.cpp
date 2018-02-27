#include <iostream>

extern "C"
{
    extern int multiply_in_js(float a, float b); 
    int multiply(float x, float y)
    {
        return multiply_in_js(x, y); 
    }

    int main()
    {
        std::cout << "\nInitialized\n";
        return 0;
    }
}