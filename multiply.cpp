#include <iostream>

extern "C"
{
    extern int multiply_in_js(float a, float b); // Now I have to implement it in the js code
    int multiply(float x, float y)
    {
        return multiply_in_js(x, y); // A bit of work left to do here
    }
}