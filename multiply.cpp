#include <iostream>

extern "C"
{
    extern int multiply_in_js(float a, float b); // Implemented in js but now what?

    int multiply(float x, float y)
    {
        return multiply_in_js(x, y); // Fault point
    }
}