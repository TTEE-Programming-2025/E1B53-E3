#include<stdio.h>
#include<stdlib.h>

int main(){
    char seats[9][9];
    int i,j,attempts=0,password,row,col,num;
    char choice,cont;
    for(i=0;i<9;i++){
    for(j=0;j<9;j++){
    seats[i][j]='*';
    }
    }
    seats[0][0]='@';seats[0][1]='@';seats[1][1]='@';
    seats[2][2]='@';seats[3][3]='@';seats[4][4]='@';
    seats[5][5]='@';seats[6][6]='@';seats[7][7]='@';
    seats[8][8]='@';
    for(i=0;i<20;i++) printf("##########################\n");
    while(attempts<3){
    printf("請輸入密碼(預設2025): ");
    scanf("%d",&password);
    if(password==2025) break;
    attempts++;
    if(attempts==3){
    printf("密碼錯誤三次，結束\n");
    return 0;
    }
    }
    while(1){
    printf("--------[Booking System]--------\n");
    printf("a. Available seats\nb. Arrange for you\nc. Choose by yourself\nd. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c",&choice);
    if(choice=='a'){
    printf("\\123456789\n");
    for(i=8;i>=0;i--){
    printf("%d-",i+1);
    for(j=0;j<9;j++){
    printf("%c",seats[i][j]);
    }
    printf("\n");
    }
    }else if(choice=='b'){
    printf("需要幾個座位(1~4)? ");
    scanf("%d",&num);
    if(num<1||num>4){
    printf("輸入錯誤，返回主選單\n");
    continue;
    }
    int count=0;
    for(i=0;i<9&&count<num;i++){
    for(j=0;j<9&&count<num;j++){
    if(seats[i][j]=='*'){
    seats[i][j]='@';
    count++;
    }
    }
    }
    if(count<num) printf("座位不足\n");
    else printf("安排完成\n");
    }else if(choice=='c'){
    printf("請輸入座位(例如1-1): ");
    scanf("%d-%d",&row,&col);
    row--; col--;
    if(row<0||row>=9||col<0||col>=9){
    printf("超出範圍\n");
    continue;
    }
    if(seats[row][col]=='@'){
    printf("已被預訂，請選別的\n");
    continue;
    }
    seats[row][col]='@';
    printf("已完成選位\n");
    }else if(choice=='d'){
    printf("Continue? (y/n): ");
    scanf(" %c",&cont);
    if(cont=='n') break;
    }
    }
    return 0;
}

