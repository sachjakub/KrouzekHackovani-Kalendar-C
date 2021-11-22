#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>  

int main(int argc, char** argv) {
    int inputdate;
    int input;
    char text[255];
    char filename[6];

    while(1) {
        printf_s("Kalendar:\n  01 02 03 04 05 06 07\n  08 09 10 11 12 13 14\n  15 16 17 18 19 20 21\n  22 23 24 25 26 27 28\n  29 30 31\n\nZvol datum: ");
        scanf_s("%u", &inputdate);
        printf_s("\nChces pripomnky zapsat nebo cist?\n\tZapsat - 1\n\tCist - 2\n\n - ");
        scanf_s("%u", &input);

        if (input == 1) {
            printf_s("\n\nPripominka na %u den: ", inputdate);
            scanf_s("%c", &text[255]);

            FILE* file;
            file = fopen("01.txt", "w");
            fputs(text, file);
            fclose(file);
        }
        else if (input == 2) {

        }
    }
    return 0;
}
