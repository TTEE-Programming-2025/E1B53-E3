#include<stdio.h>
int main(){
    int choice;
    for(int i=0;i<20;i++){
    printf("##########################\n");
    }
    while(1){
    printf("--------[Booking System]--------\n");
    printf("a. Available seats\n");
    printf("b. Arrange for you\n");
    printf("c. Choose by yourself\n");
    printf("d. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c",&choice);
    if(choice=='d'){
    break;
    }
    }
    return 0;
}

