#include <stdio.h>
#include <string.h>
int S(char*);
int main() {
    char str[100];
    printf("Enter the input string: ");
    scanf("%s", str);
    if(S(str))
        printf("Given string belongs to the language.");
    else
        printf("Given string does not belong to the language.");
    return 0;
}
int S(char* str) {
    if(strlen(str) == 0)   
        return 1;
    else if(str[0] == '0' && str[strlen(str)-1] == '1') { 
        str[strlen(str)-1] = '\0';
        return S(str+1);
    }
    else
        return 0;
}
