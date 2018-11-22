#include<stdio.h>
#include <string.h>
#include <stdlib.h>
char reVal(int num) 
{ 
    if (num >= 0 && num <= 9) 
        return (char)(num + '0'); 
    else
        return (char)(num - 10 + 'A'); 
} 
  
void strev(char *str) 
{ 
    int len = strlen(str); 
    int i; 
    for (i = 0; i < len/2; i++) 
    { 
        char temp = str[i]; 
        str[i] = str[len-i-1]; 
        str[len-i-1] = temp; 
    } 
} 

char * fromDecimal(char res[], int base, int inputNum) 
{ 
    int index = 0;  // Initialize index of result 
    while (inputNum > 0) 
    { 
        res[index++] = reVal(inputNum % base); 
        inputNum /= base; 
    } 
    res[index] = '\0';  
    strev(res);  
    return res; 
} 
 
int main() 
{ 
    int inputNum, base;
    printf("Enter input number : \n");
    scanf("%d",&inputNum);
    printf("Enter which base you want to convert to : \n");
    scanf("%d",&base);
    char res[100]; 
    printf("Equivalent of %d in base %d is "
           " %s\n", inputNum, base, fromDecimal(res, base, inputNum)); 
    return 0; 
} 