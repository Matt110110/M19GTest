#include <iostream>

extern "C"
{
    int multiply(float x, float y)
    {
        return (int) x*y;
    }
}