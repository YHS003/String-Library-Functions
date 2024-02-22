/*===================My_memchr===================*/
void *My_memchr(const void *Str, const int character, int Num_of_Bytes);
/*===================My_memcmp===================*/
int My_memcmp(const void *Str1, const void *Str2, int Num_of_Bytes);
/*===================My_memcpy===================*/
void *My_memcpy(void *STRING_1, const void *STRING_2, int Num_of_Bytes);
/*===================My_memmove===================*/
void *My_memmove(void *STRING_1, const void *STRING_2, int Num_of_Bytes);
/*===================My_memset===================*/
void *My_memset(void *const STRING, const int character, int Num_of_Bytes);
/*===================My_strcat===================*/
char *My_strcat(char *const STRING_1, const char *STRING_2);
/*===================My_strncat===================*/
char *My_strncat(char *const STRING_1, const char *STRING_2, int Num_of_Bytes);
/*===================My_strchr===================*/
char *My_strchr(const char *STRING, int character);
/*===================My_strcmp===================*/
int My_strcmp(const char *STRING_1, const char *STRING_2);
/*===================My_strncmp===================*/
int My_strncmp(const char *STRING_1, const char *STRING_2, int Num_of_Bytes);
/*===================My_strcoll===================*/
int My_strcoll(const char *STRING_1, const char *STRING_2);
/*===================My_strcpy===================*/
char *My_strcpy(char *STRING_1, const char *STRING_2);
/*===================My_strncpy===================*/
char *My_strncpy(char *STRING_1, const char *STRING_2, int Num_of_Bytes);
/*===================My_strcspn===================*/
int My_strcspn(const char *STRING_1, const char *STRING_2);
/*===================My_strlen===================*/
unsigned int My_strlen(const char *STRING);
/*===================My_strpbrk===================*/
char *My_strpbrk(const char *STRING_1, const char *STRING_2);
/*===================My_strrchr===================*/
char *My_strrchr(const char *STRING, int character);
/*===================My_strspn===================*/
int My_strspn(const char *STRING_1, const char *STRING_2);
/*===================My_strstr===================*/
char *My_strstr(const char *haystack, const char *needle);
/*===================My_strxfrm===================*/
int My_strxfrm(char *dest, const char *source, int NumOfBytes);
