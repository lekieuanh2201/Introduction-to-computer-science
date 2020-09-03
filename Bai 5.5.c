#include<stdio.h>
#include<string.h>
void xoa_ky_tu(char str[], int a){
	int i, l = strlen(str);
	for(i = a; i < l; ++i){
		str[i] = str[i+1];
	}
	--l;
}
void xoa_khoang_trang(char str[]){
	int j, n = strlen(str);
	while(str[0] == ' '){
		xoa_ky_tu(str,0);
		--n;
	}
	while(str[n-1] == ' '){
		xoa_ky_tu(str,n-1);
		--n;
	}
	for( j = 0; j < n; ++j){
		if(str[j] == ' ' && str[j+1] == ' '){
			xoa_ky_tu(str,j);
			--j;
			--n;
		}
	}
}
void chuan_hoa_ten(char str[]){
	strlwr(str);
	int k, m = strlen(str);
	str[0] -= 32;
	for(k = 1; k < m; ++k){
		if(str[k] == ' '){
			str[k+1] -= 32;
		}
	}
}

int main()
{
	int n;
	do
	{
		scanf("%d",&n);
	}
	while(n > 100);
	getchar(); 
	char ho_va_ten[n][51];
	int dem, dem2 ;
	for (dem = 0; dem < n; ++dem){
		gets(ho_va_ten[dem]);
	}
	for(dem = 0; dem < n; ++dem){
		xoa_khoang_trang(ho_va_ten[dem]);
		chuan_hoa_ten(ho_va_ten[dem]);
	}
	char thay_the[51];
	for(dem = n-1; dem >= 0; --dem){
		for(dem2 = 0; dem2 <= dem-1; ++dem2){
			if(strcmp(ho_va_ten[dem2],ho_va_ten[dem2+1])>0){
				strcpy(thay_the,ho_va_ten[dem2]);
				strcpy(ho_va_ten[dem2],ho_va_ten[dem2+1]);
				strcpy(ho_va_ten[dem2+1],thay_the);
			}
		}
	}
	
	for(dem = 0; dem < n; ++dem){
		printf("(%d)%s\n",dem+1,ho_va_ten[dem]);
	}
	return 0;
}
