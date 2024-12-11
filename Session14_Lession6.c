#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];  
    int count = 0;  
    int i = 0;
    printf("Moi ban nhap chuoi ki tu : ");
    fgets(str, sizeof(str), stdin);
    while (i<strlen(str)-1) {
        if(str[i] == ' '){
        	count -=1;
		}
		i++;
		count++;
    }
    printf("So tu trong chuoi la : %d\n", count);
    return 0;
}

