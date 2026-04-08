#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char ha[1005];
    fgets(ha, sizeof(ha), stdin);
    int L = 0;
    int S = 0;
    int W =0;
    for (int i =0 ; i< strlen(ha);i = i+1){
        if(ha[i]==' '){
            L = L+1;
        }
        else if (ha[i] == '.'){
            S = S+1;
        }
        else{
            W = W+1;
        }
    }
    L = L+1;
    W = W/L*100;
    S = S/L*100;
    int index = 0.0588 * W - 0.296 * S - 15.8;
    printf("%d", index);
}