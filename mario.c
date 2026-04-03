#include<stdio.h>
int main(){
    int h;
    scanf("%d", &h);
    int i = 1;
    int space = h -1;
    for (; i <= h; i = i+1){
        int z = 1;
        for (; z <= space; z = z +1){
            printf(" ");
        }
        int b = 1;
        for (; b <= i; b = b +1){
            printf("#");
        }
        space = space -1;
        printf("\n");
    }

}