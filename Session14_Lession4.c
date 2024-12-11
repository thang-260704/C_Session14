#include <stdio.h>
#include<string.h>
int main() {
    char str[] = "Toi yeu Rikkei";  
    char word;
    int count = 0;
    printf("Nhap vao mot ky tu: ");
    scanf("%c", &word);
    for (int i = 0; i<strlen(str)-1; i++) {
        if (str[i] == word) {
            count++;
        }
    }
    printf("Ky tu ban muon kiem tra xuat hien %d lan", count);

    return 0;
}

