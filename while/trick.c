#include<stdio.h>
int main() {
    int input;
    printf("how old are you?\n>>> ");
    scanf("%d",&input);

    if (input != 18) {
        printf("you're not adult you cannot see what's inside.");
    }
    else if(input == 18) {
        printf("Congrats!! you're adult now.\nBe prepared for your future.");
    }
    else {
        printf("I think you have entered something wrong...");
    }
    

    return 0;
}
