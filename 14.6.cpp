#include<stdio.h>
#include<string.h>
int main(){
	int a;
	char c[100];
	printf("nhap chuoi ki tu : ");
	fgets(c,100,stdin);
	for(int i=0;i<strlen(c)-1;i++){
		for (int j=65;j<91;j++){
				if(c[i]==j){
    		    a++;
		     	}
	    	}
	    for (int k=97;k<123;k++){
				if(c[i]==k){
    		    a++;
		     	}
	    }
    }
	printf("so luong chu cai co trong mang la : %d",a);
		return 0;
}
