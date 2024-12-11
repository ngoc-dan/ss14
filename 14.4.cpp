#include<stdio.h>
#include<string.h>
int main(){
	int n,a;
	char c[]="ngoc dan";
	printf("nhap phan tu muon tim : ");
	scanf("%c",&n);
    for(int i=0;i<strlen(c);i++){
    	if(c[i]==n){
    		a++;
		}
	}
	printf("so luong phan tu %c co trong mang la : %d",n,a);
		return 0;
	}
