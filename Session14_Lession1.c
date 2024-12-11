#include<stdio.h>
#include<string.h>
int main(){
	char word[1000];
	printf("Moi ban nhap chuoi ki tu : ");
	fgets(word,1000,stdin);
	printf("Chuoi ki tu ban vua nhap la : ");
	fputs(word,stdout);
	printf("Do dai chuoi ki tu ban nhap la : %d",strlen(word)-1);
	return 0;
}
