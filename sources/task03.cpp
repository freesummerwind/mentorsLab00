#include <string>

int wordsCounter(const std::string& str)
{
    if (str.length() == 0)
        return 0;
    int result = 1;
    for (int i = 1; i < str.length(); ++i)
    {
        if((str[i] == '.' || str[i] == ',' || str[i] == ' ')
        && str[i-1] != '.' && str[i-1] != ',' && str[i-1] != ' ')
        {
            ++result;
        }
    }
    if (str[str.length() - 1] == ' ' || str[str.length() - 1] == '.'
    || str[str.length() - 1] == ',')
    {
        --result;
    }
    return result;
}