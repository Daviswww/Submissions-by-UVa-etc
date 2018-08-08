#include <cstdio>  
#include <cstdlib>  
#include <cstring> 

int arr[30];  
int max;  
int end[400];  
int top;  
  
int main(void){  
    int i, j;  
    char ch;  
  
    memset(arr, 0, sizeof(arr));  
    max = 0;  
    for (i = 0; i < 4; i++){  
        while ((ch = getchar()) != '\n'){  
            if (ch >= 'A' && ch <= 'Z'){  
                arr[ch - 'A']++;  
                max = max > arr[ch - 'A'] ? max : arr[ch - 'A'];  
            }  
        }  
    }  
    for (i = 26, top = 0; max >= top && i >= 0; i--){  
        if (arr[i] > top){  
            while (top < arr[i]){  
                end[++top] = i;  
            }  
            end[top] = i;  
        }  
    }  
    for (i = max; i >= 1; i--){  
        for (int j = 0; j <= end[i]; j++){  
            if (arr[j] >= i){  
                putchar('*');  
            }  
            else {  
                putchar(' ');  
            }  
            if (j != end[i]){  
                putchar(' ');  
            }  
            else{  
                putchar('\n');  
            }  
        }  
    }  
    for (i = 0; i < 25; i++){  
        printf("%c ", 'A' + i);  
    }  
    printf("Z\n");  
    return 0;  
}  
