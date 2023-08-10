#include <stdio.h> 
 #include <stdbool.h> 
 enum State { 
     q0,   
     q1, 
     q2    
 }; 
 enum State transition(enum State currentState, char input) { 
     switch (currentState) { 
         case q0: 
             if (input == 'b') return q1; 
             break; 
         case q1: 
             if (input == 'a') return q2; 
             if (input == 'b') return q1; 
             break; 
         case q2: 
             break; 
     } 
     return currentState;  
 } 
 bool isAccepted(const char *input) { 
     enum State currentState = q0; 
     int i;
     for ( i = 0; input[i] != '\0'; i++) { 
         currentState = transition(currentState, input[i]); 
     } 
     return currentState == q2; 
 } 
  
 int main() { 
     char input[100]; 
     printf("Enter a string: "); 
     scanf("%s", input); 
  
     if (isAccepted(input)) { 
         printf("Accepted: The string follows the 'b...a' pattern.\n"); 
     } else { 
         printf("Rejected: The string does not follow the 'b...a' pattern.\n"); 
     } 
  
     return 0; 
 }
