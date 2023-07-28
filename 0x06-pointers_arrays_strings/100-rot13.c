/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
    char *ptr = str;
    int i;

    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            for (i = 0; i < 13; i++)
            {
                if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
                    (*str)++;
                else if (*str == 'z')
                    *str = 'a';
                else if (*str == 'Z')
                    *str = 'A';
            }
        }
        str++;
    }

    return ptr;
}
