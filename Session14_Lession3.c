#include<stdio.h>
#include<string.h>
int main(){
	char word[1000];
	printf("Moi ban nhap chuoi ki tu : ");
	fgets(word,1000,stdin);
	printf("Chuoi ki tu ban vua nhap la : ");
	for(int i=strlen(word)-2;i>=0;i--){
		printf("%c  ",word[i]);
	}
	return 0;
}
