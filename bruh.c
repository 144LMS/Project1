#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//int array();

int main() {
	setlocale(LC_ALL, "RUS");
    FILE* pog;
   
    int a[2][8][8];
    int a1[2][8][8];
    int a2[2][8][8];

    pog = fopen("my.txt", "r");
    if (pog == NULL) {
        printf("ERROR");
    }
    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                fscanf(pog, "%d", &a[k][i][j]);
            }
        }
    }

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(a[0]) / sizeof(a[0][0]);
    int* final = a[0] + n * m - 1;
    for (int* ptr = a[0], i = 1; ptr <= final; ptr++, i++)
    {
        printf("%d \t", *ptr);
        
        if (i % m == 0)
        {
            printf("\n");
        }
    }
    return 0;
}

//int array(int a[2][8][8]) {
//    FILE* pog;
//    pog = fopen("my.txt", "r");
//    if (pog == NULL) {
//        printf("ERROR");
//    }
//    for (int k = 0; k < 2; k++) {
//        for (int i = 0; i < 8; i++) {
//            for (int j = 0; j < 8; j++) {
//                fscanf(pog, "%d", &a[k][i][j]);
//            }
//        }
//    }
//}