#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("nhap chuoi ki tu : " );
	fgets(c,1000,stdin);
	printf("%s",c);
	printf("do dai cua chuoi la : %d",strlen(c));
	return 0;
}
