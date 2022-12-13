#include "main.h"

/**
 * check_specifier - check that character is a valid specifier and assign appropriate function for its printing.
 * @format: the specifier type
 *
 * return: pointer to function
 *
 */

int (*check_specifier(const char  *format))(va_list)
{
    int i = 0;
    func_t my_array[4] = 
    {
        {"c", print_char},
        {"s", print_str},
        {"%", print_cent},
        {NULL, NULL}};
/*a loop structure that gets a character from check_specifier function compares against the struct
for a match if there is a match then excecute the function that corresponds to the character..
*/
for (i = 0; my_array[i].t != NULL; i++)
{
    if (*(my_array[i].t) == *format)
        return (my_array[i].f);
}
    return NULL;
}













