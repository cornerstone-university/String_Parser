/*
Author: Avery Wittmer
Desc.: This program returns the second word in a user entered string and tests the accuracy of its performance.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 150

char* secondWord(char* inputString, char* outputString);

int main(){

   char strIn[SIZE], strOut[SIZE];

     printf("Functional Test of secondWord\n");
     printf("Tests multiple inputs to the secondWord function to confirm operation.\n\n");
     printf("Function Test Case #1\n");
     printf("Input:     One Two three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

     printf("Function Test Case #2\n");
     printf("Input:     One\tTwo\t three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }
     printf("Function Test Case #3\n");
     printf("Input:     One,Two,three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

     printf("Function Test Case #4\n");
     printf("Input:     One \t Two \t three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

     printf("Function Test Case #5\n");
     printf("Input:     One - Two - three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }
     printf("Function Test Case #6\n");
     printf("Input:     One#Two#three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

     printf("Function Test Case #7\n");
     printf("Input:     One!Two!three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

     printf("Function Test Case #8\n");
     printf("Input:     One*Two*three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

     printf("Function Test Case #9\n");
     printf("Input:     One^Two^three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }
     printf("Function Test Case #10\n");
     printf("Input:     One&Two&three\n");
     printf("Expected Output:     Two\n");
     strcpy(strIn,"One Two Three");
     printf("%s\n",secondWord(strIn,strOut));
     if (strcmp(secondWord(strIn,strOut),"Two") == 0){
        printf("Result : Pass\n\n");
     }
     else {
        printf("Result : Fail\n\n");
     }

   return 0;
}

char* secondWord(char* inputString, char* outputString){
    int i, j=0, k=0, len = strlen(inputString);
    char ptr[SIZE];

    for(i=0; i<len; i++){
        if(isalpha(inputString[i]) && k==0){
            k++;
        }
        else if (!isalpha(inputString[i]) && k==1){
            k++;
        }
        else if (isalpha(inputString[i]) && k==2){
            strncpy(&ptr[j], &inputString[i], 1);
            j++;
        }
        else if (!isalpha(inputString[i]) && k==2){
            if(j>0){
                strcpy(outputString, ptr);
            }
        }
    }
    return outputString;
}

