#include<stdio.h>
#include<string.h>


int add_arr(int *arr,int cnt)
{
    int i = 0;
    int total = 0;
    while(i < cnt)
    {
        if(arr[i] < 1000)
        {
          total += arr[i];
        }
        i++;
    }

    return total;
}



int validate_num(const char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return 1;
    }
    return 0;
}

void strtoint(const char* str, int *num_arr,int *cnt)
{
    static int num = 0;

    if(validate_num(str[*cnt]))
    {
       num = num * 10 + str[*cnt] - '0';
       if(validate_num(str[(*cnt)+1]))
       {
           (*cnt)++;
       }
       else
       {
          num_arr[*cnt] = num;
          num = 0;
          (*cnt)++;
       }
    }
    else
    {
        (*cnt)++;
        num = 0;
    }
}

int sumofint(const char *str)
{
    int cnt =0;
    int total = 0;
    int num_arr[100] = {0};
    while(str[cnt] != '\0')
    {
       strtoint(str,num_arr,&cnt);
    }

    total = add_arr(num_arr,cnt);

    return total;
}

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
          int total = sumofint(str);

        if(total > 0)
        {
            return total;
        }
        return 0;
    }
    return -1;
}

