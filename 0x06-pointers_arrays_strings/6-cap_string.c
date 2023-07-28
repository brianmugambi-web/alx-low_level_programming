/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
    int i = 0;

    /* Capitalize the first letter if it is a lowercase letter */
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 'a' - 'A';

    while (str[i] != '\0')
    {
        /* Capitalize the letter after the specified word separators */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            i++;
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 'a' - 'A';
        }
        else
        {
            /* Convert uppercase letters in the middle of words to lowercase */
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 'a' - 'A';
            i++;
        }
    }

    return str;
}
