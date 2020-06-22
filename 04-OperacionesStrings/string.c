/*
SSL
04-OperacionesStrings
Manuel Ignacio Espina
170.366-3
*/

#include <stdio.h>
#include <stdbool.h>
#include "string.h"


size_t GetLength(const char * str)
{
    size_t index = 0;
    while(str[index] != '\0')
    {
        index++;
    }
    return index;
}


bool IsEmpty(const char * str)
{
    return GetLength(str) == 0;
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

bool AreEqual(const char * str1, const char * str2){
    if(GetLength(str1) != GetLength(str2)) return false;

    for(unsigned i = 0; i < GetLength(str1); ++i) {
        if (str1[i] != str2[i]) return false;
    }

    return true;
}
