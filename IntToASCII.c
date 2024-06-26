#include <stdio.h>
//this program converts a decimal number to its ascii representation
typedef union{
    unsigned int intDec;
    unsigned char charBin;
} multiType;
int numToconvert = 45;

int main(void){
    if(numToconvert < 33 && numToconvert > 0 || numToconvert == 127){
        printf("number is one of the non printable chars");
        return 0;
    }
    if(numToconvert > 128 || numToconvert < 0){
        printf("number is out of the ascii table");
        return 0;
    }
    multiType bitArr = {0};
    bitArr.intDec = numToconvert;
    printf("%c\n", bitArr.charBin);
}