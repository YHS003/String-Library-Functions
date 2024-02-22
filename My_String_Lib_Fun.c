#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "My_String_Lib_Fun.h"

/*===================memchr===================*/
void *My_memchr(const void *Str, const int character, int Num_of_Bytes)
{
    char *ret = Str;

    if(NULL == Str)
    {
        printf("Failed due to Null Pointer..!!\n");
    }
    else
    {
        while(Num_of_Bytes--)
        {
            if((*ret) == character)
            {
                break;
            }
            else if((*ret) != character)
            {
                ret++;
            }
            else
            {
                ret = NULL;
            }
        }
    }
    return ret;
}
/*===================memcmp===================*/
int My_memcmp(const void *Str1, const void *Str2, int Num_of_Bytes)
{
    int Return_Value = 0; /*Assume to equal condition*/
    char *String_1 = Str1;
    char *String_2 = Str2;
    if((NULL == Str1) || (NULL == Str2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while(Num_of_Bytes--)
        {
            if((String_1) == (String_2))
            {
                Return_Value = 0;
                break;
            }
            else if((*String_1++) == (*String_2++))
            {
                Return_Value = 0;
                continue;
            }
            else
            {
                Return_Value = ((*String_1) < (*String_2)) ? -1 : 1;
                break;
            }
        }
    }

    return Return_Value;
}
/*===================memcpy===================*/
void *My_memcpy(void *STRING_1, const void *STRING_2, int Num_of_Bytes)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while(Num_of_Bytes--)
        {
            (*String_1++) = (*String_2++);
        }
    }

    return STRING_1;
}
/*===================memmove===================*/
void *My_memmove(void *STRING_1, const void *STRING_2, int Num_of_Bytes)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while(Num_of_Bytes--)
        {
            (*String_1++) = (*String_2++);
        }
    }

    return STRING_1;
}
/*===================memset===================*/
void *My_memset(void *const STRING, const int character, int Num_of_Bytes)
{
    char *String = STRING;

    if(NULL == STRING)
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while(Num_of_Bytes--)
        {
            (*String++) = character;
        }
    }

    return STRING;
}
/*===================strcat===================*/
char *My_strcat(char *const STRING_1, const char *STRING_2)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;
    unsigned char Num_of_Char_Str_1 = 0;
    unsigned char Num_of_Char_Str_2 = 0;
    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *String_1++)
        {
            Num_of_Char_Str_1++;
        }
        String_1 = STRING_1 + Num_of_Char_Str_1;
        while('\0' != *String_2++)
        {
            Num_of_Char_Str_2++;
        }
        String_2 = STRING_2;

        while(Num_of_Char_Str_2--)
        {
            (*String_1++) = (*String_2++);
        }
    }

    *String_1 = '\0';

    return STRING_1;
}
/*===================strncat===================*/
char *My_strncat(char *const STRING_1, const char *STRING_2, int Num_of_Bytes)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;
    unsigned char Num_of_Char_Str_1 = 0;

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }

    else
    {
        while('\0' != *String_1++)
        {
            Num_of_Char_Str_1++;
        }

        String_1 = STRING_1 + Num_of_Char_Str_1;

        while(Num_of_Bytes--)
        {
            (*String_1++) = (*String_2++);
        }
    }

    *String_1 = '\0';

    return STRING_1;
}
/*===================strchr===================*/
char *My_strchr(const char *STRING, int character)
{
    char *String = STRING;

    if(NULL == STRING)
    {
        printf("Failed due to Null Pointer..!!\n");
    }
    else
    {
        while('\0' != *String)
        {
            if(character == *String)
            {
                break;
            }
            else if(character != *String)
            {
                String++;
            }
            else
            {
                String = NULL;
            }
        }
    }
    return String;
}
/*===================strcmp_Final_Function_AllProblemSolved===================*/
int My_strcmp(const char *STRING_1, const char *STRING_2)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;
    int Return_Value = 0; //Assume equality

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        if(STRING_1 == STRING_2)
        {
            Return_Value = 0;
        }
        else
        {
            if('\0' == (*String_1) && ('\0' != (*String_2)))
            {
                Return_Value = -1;
            }
            else  if('\0' == (*String_2) && ('\0' != (*String_2)))
            {
                Return_Value = 1;
            }
            else if(('\0' == (*String_1)) && ('\0' == (*String_2)))
            {
                Return_Value = 0;
            }
            else
            {
                while(('\0' != (*String_1++)) && ('\0' != (*String_2++)))
                {
                    if(*String_1 > *String_2)
                    {
                        Return_Value = 1;
                        break;
                    }
                    else if(*String_1 < *String_2)
                    {
                        Return_Value = -1;
                        break;
                    }
                    else
                    {
                        Return_Value = 0;
                    }
                }
            }
        }
    }

    return Return_Value;
}
/*===================strncmp_Final_Function_AllProblemSolved===================*/
int My_strncmp(const char *STRING_1, const char *STRING_2, int Num_of_Bytes)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;
    int Return_Value = 0; //Assume equality

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        if(STRING_1 == STRING_2)
        {
            Return_Value = 0;
        }
        else
        {
            if('\0' == (*String_1) && ('\0' != (*String_2)))
            {
                Return_Value = -1;
            }
            else  if('\0' == (*String_2) && ('\0' != (*String_2)))
            {
                Return_Value = 1;
            }
            else if(('\0' == (*String_1)) && ('\0' == (*String_2)))
            {
                Return_Value = 0;
            }
            else
            {
                while(Num_of_Bytes--)
                {
                    if(*String_1 > *String_2)
                    {
                        Return_Value = 1;
                        break;
                    }
                    else if(*String_1 < *String_2)
                    {
                        Return_Value = -1;
                        break;
                    }
                    else
                    {
                        String_1++;
                        String_2++;
                        Return_Value = 0;
                    }
                }
            }
        }
    }

    return Return_Value;
}
/*===================strcoll===================*/
int My_strcoll(const char *STRING_1, const char *STRING_2)
{
    char *String_1 = STRING_1;
    char *String_2 = STRING_2;
    int Return_Value = 0; //Assume equality

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        if(STRING_1 == STRING_2)
        {
            Return_Value = 0;
        }
        else
        {
            if('\0' == (*String_1) && ('\0' != (*String_2)))
            {
                Return_Value = -1;
            }
            else  if('\0' == (*String_2) && ('\0' != (*String_2)))
            {
                Return_Value = 1;
            }
            else if(('\0' == (*String_1)) && ('\0' == (*String_2)))
            {
                Return_Value = 0;
            }
            else
            {
                while(('\0' != (*String_1++)) && ('\0' != (*String_2++)))
                {
                    if(*String_1 > *String_2)
                    {
                        Return_Value = 1;
                        break;
                    }
                    else if(*String_1 < *String_2)
                    {
                        Return_Value = -1;
                        break;
                    }
                    else
                    {
                        Return_Value = 0;
                    }
                }
            }
        }
    }

    return Return_Value;
}
/*===================strcpy===================*/
char *My_strcpy(char *STRING_1, const char *STRING_2)
{
    char *string_1 = STRING_1;
    char *string_2 = STRING_2;
    unsigned int Num_of_Char = 0;
    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *string_2++)
        {
            Num_of_Char++;
        }
        string_2 = STRING_2;
        while(Num_of_Char--)
        {
            *string_1++ = *string_2++;
        }
    }
    return STRING_1;
}
/*===================strncpy===================*/
char *My_strncpy(char *STRING_1, const char *STRING_2, int Num_of_Bytes)
{
    char *string_1 = STRING_1;
    char *string_2 = STRING_2;
    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while(Num_of_Bytes--)
        {
            *string_1++ = *string_2++;
        }
    }
    return STRING_1;
}
/*===================strcspn===================*/
int My_strcspn(const char *STRING_1, const char *STRING_2)
{
    char *string_1 = STRING_1;
    char *string_2 = STRING_2;
    int Num_of_Char_of_String_1 = 0;
    int Num_of_Char_of_String_2 = 0;
    int Len_String = 0;
    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *string_1)
        {
            string_1++;
            Num_of_Char_of_String_1++;
        }
        string_1 = STRING_1;
        while('\0' != *string_2)
        {
            string_2++;
            Num_of_Char_of_String_2++;
        }
        string_2 = STRING_2;
        for(int String1_Counter = 0; String1_Counter < Num_of_Char_of_String_1; String1_Counter++)
        {
            string_2 = STRING_2;
            for(int String2_Counter = 0; String2_Counter < Num_of_Char_of_String_2; String2_Counter++)
            {
                if(*string_1 != *string_2)
                {
                    string_2++;
                }
                else
                {
                    Len_String = String1_Counter;
                    break;
                }
            }
            if((Len_String + 1) >= 1) // if first char of string 1 == first char of string 2  then if will be false cause (Len_String = 0) to solve it plus 1 on it and check if its greater or equal 1
            {
                break;
            }
            else
            {
                string_1++;
            }
        }
    }

    return Len_String;
}
/*===================strlen===================*/
unsigned int My_strlen(const char *STRING)
{
    unsigned int Num_of_Char = 0;

    if(NULL == STRING)
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        while('\0' != *STRING++)
        {
            Num_of_Char++;
        }
    }

    return Num_of_Char;
}
/*===================strpbrk===================*/
char *My_strpbrk(const char *STRING_1, const char *STRING_2)
{
    char *string_1 = STRING_1;
    char *string_2 = STRING_2;
    int NumCharString_1 = My_strlen(string_1);
    int NumCharString_2 = My_strlen(string_2);

    if((NULL == STRING_1) || (NULL == STRING_2))
    {
        printf("Failed due to NULL Pointer..!!\n");
        string_1 = NULL;
    }
    else
    {
        for(int Counter_1 = 0; Counter_1 < NumCharString_1; Counter_1++)
        {
            int flag = 0; //Assume 0 is not equal
            for(int Counter_2 = 0; Counter_2 < NumCharString_2; Counter_2++)
            {
                if(*string_1 == *string_2)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    flag = 0;
                    string_2++;
                }
            }
            if(flag)
            {
                break;
            }
            else
            {
                string_2 = STRING_2;
                string_1++;
                continue;
            }
        }
    }

    return string_1;
}
/*===================strrchr===================*/
char *My_strrchr(const char *STRING, int character)
{
    char *TempString = STRING;
    char *RetString = NULL;
    int NumOfChar = My_strlen(STRING);
    int flag = 0; //Assume not found

    if(NULL == STRING)
    {
        printf("Failed due to NULL Pointer..!!\n");
    }
    else
    {
        for(int Counter = 0; Counter < NumOfChar; Counter++)
        {
            if((char)character == *TempString)
            {
                RetString = TempString++;
                flag = 1;
            }
            else
            {
                TempString++;
            }
        }
        if(0 == flag)
        {
            RetString = NULL;
        }
    }

    return RetString;
}
/*===================strspn===================*/
int My_strspn(const char *STRING_1, const char *STRING_2)
{
    int length = 0;
    char *string_1 = STRING_1;
    char *string_2 = STRING_2;
    char *TempString_2 = NULL;

    if((!STRING_1) || (!STRING_2))
    {
        printf("Failed due to NULL Pointer .. !!\n");
    }
    else
    {
        for(int counter1 = 0; counter1 < My_strlen(STRING_1); counter1++)
        {
            if('\0' == string_1)
            {
                break;
            }

            for(int counter2 = 0; counter2 < My_strlen(STRING_2); counter2++)
            {
                if('\0' == *string_2)
                {
                    break;
                }
                if(*string_1 == *string_2++)
                {
                    length++;
                    string_1++;
                    TempString_2 = string_2;
                }
                else
                {
                }
            }

            if(!TempString_2)
            {
                string_2 = STRING_2;
                string_1++;
            }
            else
            {
                string_2 = TempString_2;
            }
        }
    }

    return length;
}
/*===================strstr===================*/
char *My_strstr(const char *haystack, const char *needle)
{
    char *RetValue = NULL;
    char *string_1 = haystack;
    char *string_2 = needle;
    int NumOfString_1 = My_strlen(haystack);
    int NumOfString_2 = My_strlen(needle);
    char *TempPtr = NULL;
    short flag = 0;

    if((!haystack) || (!needle))
    {
        RetValue = NULL;
    }
    else
    {
        for(int Counter = 0; Counter < NumOfString_1; Counter++)
        {
            if(*string_2 == *string_1)
            {
                flag++;
                TempPtr = string_1;
            }
            string_1++;
        }

        if(!TempPtr)
        {
            RetValue = NULL;
        }
        else
        {
            RetValue = TempPtr;
            TempPtr++;
            string_2++;
            for(int Counter = 1; Counter < NumOfString_2; Counter++)
            {
                if(*string_2 != *TempPtr)
                {
                    RetValue = NULL;
                    break;
                }
                else
                {
                    TempPtr++;
                    string_2++;
                }
            }
        }
    }

    return RetValue;
}
/*===================strxfrm===================*/
int My_strxfrm(char *dest, const char *source, int NumOfBytes)
{
    int len = 0;

    if((!dest) || (!source) || (!NumOfBytes))
    {
        len = 0;
    }
    else
    {
        while('\0' != *source)
        {
            *dest++ = *source++;
            len++;
        }
    }

    *dest = '\0';

    return len;
}
