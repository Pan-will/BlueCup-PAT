#include <stdio.h>
#include <string.h>

void getUpper(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    puts(str);
}

void getLower(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    puts(str);
}

void getReverse(char *str)
{
    int len = strlen(str) - 1;
    while (len >= 0)
    {
        printf("%c", str[len--]);
    }
    printf("\n");
}

void getTra(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    puts(str);
}

void getAbb(char *str)
{
    int flag = 0;
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    printf("%c", str[0]);
    for (i = 1; i < strlen(str); i++)
    {
        while (str[i] - str[i - 1] == 1)
        {
            flag++;
            i++;
        }
        if (flag > 1)
        {
            printf("-%c", str[--i]);
        }
        else
        {
            printf("%c", str[i]);
        }
        flag = 0;
    }
    printf("\n");
}

int main()
{
    int n;
    char str[220];
    scanf("%d%s", &n, str);
    switch (n)
    {
    case 1:
        getUpper(str);
        break;
    case 2:
        getLower(str);
        break;
    case 3:
        getReverse(str);
        break;
    case 4:
        getTra(str);
        break;
    case 5:
        getAbb(str);
    }
    return 0;
}
