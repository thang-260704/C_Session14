#include <stdio.h>
#include <string.h>

int main() {
    char input_string[1000];
    int word_count = 0;
    int i = 0;
    
    printf("Nhap mot chuoi: ");
    fgets(input_string, sizeof(input_string), stdin);
    
    int length = strlen(input_string);
    
    if (input_string[length - 1] == '\n') {
        input_string[length - 1] = '\0';
    }

    int in_word = 0;
    for (i = 0; i < length; i++) {
        if (input_string[i] != ' ' && input_string[i] != '\t' && input_string[i] != '\n') {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    
    printf("%d\n", word_count);
    
    return 0;
}
