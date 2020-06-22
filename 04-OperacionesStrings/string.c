
size_t GetLength(const char * stringValue)
{
    size_t index = 0;
    while(stringValue[index] != '\0')
    {
        index++;
    }
    return index;
}


bool IsEmpty(const char * stringValue)
{
    return GetLength(stringValue) == 0;
}

char * Power(const char * string, unsigned int power)
{
    size_t length = GetLength(string);
    size_t newLength = length * power;

    char * result = (char*) malloc((newLength + 1) * sizeof(char));
            
    for(size_t index = 0; index < newLength; index++)
    {
        result[index] = string[index % length];
    }

    result[newLength] = '\0';

    return result;
}
