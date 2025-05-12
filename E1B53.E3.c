#include<stdio.h>
    int main(){
    int password,attempts=0;
    int choice,num;
    for(int i=0;i<20;i++){
    printf("##########################\n");
    }
    while(attempts<3){
    printf("請輸入密碼(預設為2025): ");
    scanf("%d",&password);
    if(password==2025){
    break;
    }
    attempts++;
    if(attempts==3){
    printf("密碼錯誤次數過多。\n");
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
    printf("你需要幾個座位(1~4)? ");
    scanf("%d",&num);
    printf("好的，安排%d個座位給你（實作略）\n",num);
    }else if(choice=='d'){
    break;
    }
    }
    return 0;
}

