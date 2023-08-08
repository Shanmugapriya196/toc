#include <string.h>
int S(char*);
int A(char*);
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
    int len = strlen(str);
    if(len == 0)  
        return 1;
    else if(str[0] == '0' && str[len-1] == '0') { 
        str[len-1] = '\0';
        return S(str+1);
    }
    else
        return A(str);
}
int A(char* str) {
    int len = strlen(str);
    if(len == 0)   
        return 1;
    else if(str[0] == '1') {
        str[len-1] = '\0';
        return A(str+1);
    }
    else
        return 0;
}
