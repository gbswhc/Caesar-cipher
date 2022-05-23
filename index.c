#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(void){
    char sum[101];
    int n;
    
    printf("암호 : ");
    scanf("%s", sum);
    
    printf("암호화[1]/복호화[0]/종료[2] : ");
    scanf("%d", &n);
    
    while(n != 2){
        if(n == 1){
            for(int i=0; i<strlen(sum); i++){
                sum[i] += 3;
            }
            printf("암호화 : %s\n", sum);
        }
        else{
            for(int i=0; i<strlen(sum); i++){
                sum[i] -= 3;
            }
            printf("복호화 : %s\n", sum);
        }
        
        printf("암호화[1]/복호화[0]/종료[2] : ");
        scanf("%d", &n);
    }
    printf("종료");
    
    return 0;
}
