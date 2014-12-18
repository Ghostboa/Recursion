#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int evaluate (char str[80]){
    printf ("%s\n", str);
    printf ("%c\n", str[0]);

    if (str[0] == 0)
        return 0;

    else if (str[0] >= 'a' && str[0] <= 'z')
        return (10 + evaluate(str + 1));

    else if (str[0] >= 'A' && str[0] <= 'Z')
        return (5 + evaluate(str + 1));

    else if (str[0] >= '0' && str[0] <= '9')
        return (3 + evaluate(str + 1));

    else if (str[0] == '*' || str[0] == '+')
        return (50 + evaluate(str + 1));

    else
        return (100 + evaluate (str+1));
}

int main (){
    char str[80] = "";
    gets (str);
    printf ("%i", evaluate (str));
}
