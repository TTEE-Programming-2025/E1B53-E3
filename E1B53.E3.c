#include<stdio.h>
    int main(){
    int password,attempts=0;
    int choice,num;
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
    printf("�K�X���~���ƹL�h�C\n");
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
    if(choice=='b'){
    printf("�A�ݭn�X�Ӯy��(1~4)? ");
    scanf("%d",&num);
    printf("�n���A�w��%d�Ӯy�쵹�A�]��@���^\n",num);
    }else if(choice=='d'){
    break;
    }
    }
    return 0;
}

