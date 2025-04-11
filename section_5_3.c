#include <stdio.h>

int main(void) {

    int i = 1;
    switch (i % 3) {
        case 0: printf("zero\n");
        case 1: printf("one\n");
        case 2: printf("two\n");
    }

    // one and two will print, due to us not having a break statement on case 1/2

    int area_code = 999;

    switch(area_code) {
        case 229: printf("Albany\n"); break;
        case 404: printf("Atlanta\n"); break;
        case 470: printf("Atlanta\n"); break;
        case 478: printf("Macon\n"); break;
        case 678: printf("Atlanta\n"); break;
        case 706: printf("Columbus\n"); break;
        case 762: printf("Columbus\n"); break;
        case 770: printf("Atlanta\n"); break;
        case 912: printf("Savannah\n"); break;
        default: printf("Area code not recognized\n"); break;
    }

    return 0;
}