#include<stdio.h>
#include<string.h>

int neg_loop(const char *str,int i)
{
      if(str[i] == '-')
      {
         return 0;
      }
    return 1;
}

int  check_negative_char(const char *str)
{
     int result = 0,i=0;
    while(str[i] != '\0')
    {
      result = neg_loop(str,i);
      if(result == 0)
      {
          break;
      }
      i++;
    }
    return result;
}

int  check_empty_str(const char *str)
{
    int strlength = strlen(str);

    if(strlength == 0)
    {
        return 1;
    }
    return 0;
}    

int validate_string(const char *str)
{
    if(str != NULL)
    {
        return check_negative_char(str) || check_empty_str(str);
    }
    return 0;
}

int Addition_NumUsingString(const char *str)
{
    if(validate_string(str))
    {
        return 0;
    }
    return -1;
}

