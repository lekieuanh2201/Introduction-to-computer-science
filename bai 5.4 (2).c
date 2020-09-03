#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int num, i, j, k;
    scanf("%d", &num);
    getchar();
    char s[num][50];
    int len[num];

    for(i = 0; i <= num - 1; i++){
        gets(s[i]);
        strcpy(s[i], strupr(s[i]));
        len[i] = strlen(s[i]);
        for(j = 0; j <= len[i] - 1; j++){
            if(s[i][j] == ' ' && s[i][j + 1] == ' '){
                for(k = j; k <= len[i] - 2; k++){
                    s[i][k] = s[i][k + 1];
                }
                j--;
                len[i]--;
            }
        }

        if(s[i][0] == ' '){
            for(j = 0; j <= len[i] - 2; j++){
                s[i][j] = s[i][j + 1];
            }
            len[i]--;
        }

        if(s[i][len[i] - 1] == ' '){
            len[i]--;
        }
    }

    for(i = 0; i <= num - 1; i++){
        for(j = 0; j <= len[i] - 1; j++){
            printf("%c", s[i][j]);
        }
        printf(":%d", len[i]);
        printf("\n");
    }

    return 0;
}

