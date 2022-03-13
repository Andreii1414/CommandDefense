#include <iostream>
#include "Canvas.h"
int main()
{
    Canvas test(30,20);

    test.DrawRect(3, 5, 8, 13, 'a');
    test.FillRect(12, 5, 17, 13, 'a');

    test.Print();
}
