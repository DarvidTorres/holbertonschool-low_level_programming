#include "main.h"
void print_alphabet_x10(void)
{
    int counter;
    char iterate;
    for (counter = 0; counter < 10; counter++)
    {
        for (iterate = 'a'; iterate <= 'z'; iterate++)
        {
            _putchar(iterate);
        }
        _putchar('\n');
    }
}