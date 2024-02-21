#include <stdio.h>

/*
** The main function of the program.
** Returns 0 at the end of the program.
*/
int main(void)
{
        char letter = 'z';

        while (letter >= 'a')
        {
                {
                        putchar(letter);
                };

                letter--;
        };

        putchar('\n');

        return (0);
}
