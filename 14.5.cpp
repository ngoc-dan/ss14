#include<stdio.h>
#include<string.h>
int main(){
	int a=1;
	char c[100];
	printf("nhap chuoi ki tu : ");
	fgets(c,100,stdin);
	for(int i=0;i<strlen(c);i++){
    	if(c[i]==' '){
    		a++;
		}
	}
	printf("so luong tu co trong mang la : %d",a);
		return 0;
	}
	
