#include<stdio.h>
    int main(){
    int password,attempts=0;
    int choice;
    for(int i=0;i<20;i++){
    printf("##########################\n");
    }
    while(attempts<3){
    printf("�п�J�K�X(�w�]��2025): ");
    scanf("%d",&password);
    if(password==2025){
    break;
    }
    attempts++;
    if(attempts==3){
    printf("�K�X���~���ƹL�h�A�t�ε����C\n");
    return 0;
    }
    }
    while(1){
    printf("--------[Booking System]--------\n");
    printf("a. Available seats\n");
    printf("b. Arrange for you\n");
    printf("c. Choose by yourself\n");
    printf("d. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c",&choice);
    if(choice=='a'){
    printf("\\123456789\n");
    for(int i=8;i>=1;i--){ 
    printf("%d-*********\n",i);
    }
    }else if(choice=='d'){
    break;
    }
    }
    return 0;
}

