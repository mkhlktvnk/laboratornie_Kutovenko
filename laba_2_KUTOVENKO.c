#include <stdio.h> 
#include <string.h>
#include <ctype.h>
//zadanie 12

int main() {
    char str[255];
    int i, col_vo, f;
    printf_s("Enter the string\n");
    gets_s(str);
    col_vo = 0;
    f = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] != ' ' && f == 0 && isalpha(str[i])) {
            col_vo += 1;
            f = 1;
        }
        else
            if (str[i] == ' ') f = 0;
    printf("col-vo slov: %d\n", col_vo);
    return 0;
}
