#include<stdio.h>
#include<string.h>
int main()
{
	char tieu_de[150];
	fflush(stdin);
	gets(tieu_de);
	int i, j, n = strlen(tieu_de);
	for( i = 0; i < n; ++i){
		if(tieu_de[0] == ' '){
			for ( j = 0; j < n; ++j){
				tieu_de[j] = tieu_de[j+1];
			}
			--j;
			--n;
		}
		if(tieu_de[n-1] == ' '){
			tieu_de[n-1] = '\0';
			--n;
		}
		if(tieu_de[i] == ' ' && tieu_de[i+1] == ' '){
			for(j = i; j < n; ++j){
				tieu_de[j] = tieu_de[j+1];
			}
			--n;
			--j;
			--i;
		}
	}	
	strupr(tieu_de);
	printf("%s:%d",tieu_de,strlen(tieu_de));
	return 0;
} 
