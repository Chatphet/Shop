#include <stdio.h>
#include <conio.h>
#include <string.h>

struct admin{
    int A,P;
}admin_1,admin_2;

struct name{
    int A1,P1;
}name_1,name_2,name_3,name_4,name_5,name_6;

struct goods{
    char name[20];
    float price;
    int quantity,code;
}goods_1,goods_2,goods_3,goods_4,goods_5,goods_6,goods_7,goods_8,goods_9,goods_10;

float sum,*sumG;

int Komlakreung (int);

int Komlakreung(sum){
    float sum_t,sum_t1,sum_r;
    char y_n_t;
    sum_r=sum;
    printf("Use Komlakreung (y/n) : ");
        scanf("%s",&y_n_t);
        if(y_n_t=='y'){
            if (sum <= 300){
                sum_t = sum/2;
                sum_t1 = sum%2;
                printf("Price %.2f Baht\n",sum_t+sum_t1);
            }
            else {
                sum_t = sum-150;
                printf("Price %.2f Baht\n",sum_t);
            }
        }
        else {printf("Don't use Use Komlakreung \n");
            printf("Price %.2f Baht\n",sum_r);
        }
}

main(){
    int Username,Password,code_p,how,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0;
    char y_n1[2],y_n2[2];
    float sum;

    sumG=&sum;

    FILE *fp;
    fp= fopen("admin.txt","r");
    fscanf(fp,"%d %d",&admin_1.A,&admin_1.P);
    fscanf(fp,"%d %d",&admin_2.A,&admin_2.P);
    fclose(fp);

    FILE *fa;
    fa= fopen("name.txt","r");
    fscanf(fa,"%d %d",&name_1.A1,&name_1.P1);
    fscanf(fa,"%d %d",&name_2.A1,&name_2.P1);
    fscanf(fa,"%d %d",&name_3.A1,&name_3.P1);
    fscanf(fa,"%d %d",&name_4.A1,&name_4.P1);
    fscanf(fa,"%d %d",&name_5.A1,&name_5.P1);
    fscanf(fa,"%d %d",&name_6.A1,&name_6.P1);
    fclose(fa);

    FILE *fn;
    fn= fopen("list.txt","r");
    fscanf(fn,"%d %s %f %d",&goods_1.code,&goods_1.name,&goods_1.price,&goods_1.quantity);
    fscanf(fn,"%d %s %f %d",&goods_2.code,&goods_2.name,&goods_2.price,&goods_2.quantity);
    fscanf(fn,"%d %s %f %d",&goods_3.code,&goods_3.name,&goods_3.price,&goods_3.quantity);
    fscanf(fn,"%d %s %f %d",&goods_4.code,&goods_4.name,&goods_4.price,&goods_4.quantity);
    fscanf(fn,"%d %s %f %d",&goods_5.code,&goods_5.name,&goods_5.price,&goods_5.quantity);
    fscanf(fn,"%d %s %f %d",&goods_6.code,&goods_6.name,&goods_6.price,&goods_6.quantity);
    fscanf(fn,"%d %s %f %d",&goods_7.code,&goods_7.name,&goods_7.price,&goods_7.quantity);
    fscanf(fn,"%d %s %f %d",&goods_8.code,&goods_8.name,&goods_8.price,&goods_8.quantity);
    fscanf(fn,"%d %s %f %d",&goods_9.code,&goods_9.name,&goods_9.price,&goods_9.quantity);
    fscanf(fn,"%d %s %f %d",&goods_10.code,&goods_10.name,&goods_10.price,&goods_10.quantity);
    fclose(fn);

    printf("---------------------------\n");
    printf("Username : ");
    scanf("%d",&Username);
    printf("Password : ");
    scanf("%d",&Password);
    printf("---------------------------\n");
    system("cls");

    if(Username == admin_1.A && Password == admin_1.P || Username == admin_2.A && Password == admin_2.P){
        do{
         printf("Welcome to Shop\n");
        printf("----------------------------------------------------\n");
        printf("The list of product:\n");
        printf(" Code   Product\t\t    Price        Quantity\n");
        printf("   %d    %s\t\t     %.2f  Baht     %d\n",goods_1.code,goods_1.name,goods_1.price,goods_1.quantity);
        printf("   %d    %s\t    %.2f  Baht     %d\n",goods_2.code,goods_2.name,goods_2.price,goods_2.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_3.code,goods_3.name,goods_3.price,goods_3.quantity);
        printf("   %d    %s    %.2f  Baht     %d\n",goods_4.code,goods_4.name,goods_4.price,goods_4.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_5.code,goods_5.name,goods_5.price,goods_5.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_6.code,goods_6.name,goods_6.price,goods_6.quantity);
        printf("   %d    %s\t    %.2f  Baht     %d\n",goods_7.code,goods_7.name,goods_7.price,goods_7.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_8.code,goods_8.name,goods_8.price,goods_8.quantity);
        printf("   %d    %s\t    %.2f  Baht     %d\n",goods_9.code,goods_9.name,goods_9.price,goods_9.quantity);
        printf("  %d    %s\t    %.2f  Baht     %d\n",goods_10.code,goods_10.name,goods_10.price,goods_10.quantity);
        printf("----------------------------------------------------\n");

        int g3;
        char g1[20];
        float g2;

        printf("Please enter the product code : ");
        scanf("%d",&code_p);
        if(code_p==1){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_1.price = g2;
            goods_1.quantity = g3;

        }else if(code_p==2){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_2.price = g2;
            goods_2.quantity = g3;

        }else if(code_p==3){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_3.price = g2;
            goods_3.quantity = g3;


        }else if(code_p==4){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_4.price = g2;
            goods_4.quantity = g3;

        }else if(code_p==5){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_5.price = g2;
            goods_5.quantity = g3;

        }else if(code_p==6){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_6.price = g2;
            goods_6.quantity = g3;

        }else if(code_p==7){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_7.price = g2;
            goods_7.quantity = g3;

        }else if(code_p==8){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_8.price = g2;
            goods_8.quantity = g3;

        }else if(code_p==9){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_9.price = g2;
            goods_9.quantity = g3;

        }else if(code_p==10){
            printf("price : ");
            scanf("%f",&g2);
            printf("quantity : ");
            scanf("%d",&g3);

            goods_10.price = g2;
            goods_10.quantity = g3;

        }else {printf("Code not found\n");}

        printf("----------------------------------------------------\n");
        FILE *fn;
        fn= fopen("list.txt","w");
        fprintf(fn,"%d %s %.2f %d\n",goods_1.code,goods_1.name,goods_1.price,goods_1.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_2.code,goods_2.name,goods_2.price,goods_2.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_3.code,goods_3.name,goods_3.price,goods_3.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_4.code,goods_4.name,goods_4.price,goods_4.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_5.code,goods_5.name,goods_5.price,goods_5.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_6.code,goods_6.name,goods_6.price,goods_6.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_7.code,goods_7.name,goods_7.price,goods_7.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_8.code,goods_8.name,goods_8.price,goods_8.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_9.code,goods_9.name,goods_9.price,goods_9.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_10.code,goods_10.name,goods_10.price,goods_10.quantity);
        fclose(fn);


        printf("Do you want to continue (y/n): ");
        scanf("%s",y_n1);
        system("cls");
        }while(strcmp(y_n1, "y") == 0);



    }
    else if(Username == name_1.A1 && Password == name_1.P1 || Username == name_2.A1 && Password == name_2.P1 ||
            Username == name_3.A1 && Password == name_3.P1 || Username == name_4.A1 && Password == name_4.P1 ||
            Username == name_5.A1 && Password == name_5.P1 || Username == name_6.A1 && Password == name_6.P1){

    do{
        printf("Welcome to Shop\n");
        printf("----------------------------------------------------\n");
        printf("The list of product:\n");
        printf(" Code   Product\t\t    Price        Quantity\n");
        printf("   %d    %s\t\t     %.2f  Baht     %d\n",goods_1.code,goods_1.name,goods_1.price,goods_1.quantity);
        printf("   %d    %s\t    %.2f  Baht     %d\n",goods_2.code,goods_2.name,goods_2.price,goods_2.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_3.code,goods_3.name,goods_3.price,goods_3.quantity);
        printf("   %d    %s    %.2f  Baht     %d\n",goods_4.code,goods_4.name,goods_4.price,goods_4.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_5.code,goods_5.name,goods_5.price,goods_5.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_6.code,goods_6.name,goods_6.price,goods_6.quantity);
        printf("   %d    %s\t    %.2f  Baht     %d\n",goods_7.code,goods_7.name,goods_7.price,goods_7.quantity);
        printf("   %d    %s\t\t    %.2f  Baht     %d\n",goods_8.code,goods_8.name,goods_8.price,goods_8.quantity);
        printf("   %d    %s\t    %.2f  Baht     %d\n",goods_9.code,goods_9.name,goods_9.price,goods_9.quantity);
        printf("  %d    %s\t    %.2f  Baht     %d\n",goods_10.code,goods_10.name,goods_10.price,goods_10.quantity);
        printf("----------------------------------------------------\n");

        printf("Please enter the product code : ");
        scanf("%d",&code_p);
        if(code_p==1){
            printf("You have chosen %s with Price %.2f Baht\n",goods_1.name,goods_1.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_1.quantity-=how;
            p1=how*goods_1.price;
            printf("Your total price is %d Baht\n",p1);
        }else if(code_p==2){
            printf("You have chosen %s with Price %.2f Baht\n",goods_2.name,goods_2.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_2.quantity-=how;
            p2=how*goods_2.price;
            printf("Your total price is %d Baht\n",p2);
        }else if(code_p==3){
            printf("You have chosen %s with Price %.2f Baht\n",goods_3.name,goods_3.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_3.quantity-=how;
            p3=how*goods_3.price;
            printf("Your total price is %d Baht\n",p3);
        }else if(code_p==4){
            printf("You have chosen %s with Price %.2f Baht\n",goods_4.name,goods_4.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_4.quantity-=how;
            p4=how*goods_4.price;
            printf("Your total price is %d Baht\n",p4);
        }else if(code_p==5){
            printf("You have chosen %s with Price %.2f Baht\n",goods_5.name,goods_5.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_5.quantity-=how;
            p5=how*goods_5.price;
            printf("Your total price is %d Baht\n",p5);
        }else if(code_p==6){
            printf("You have chosen %s with Price %.2f Baht\n",goods_6.name,goods_6.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_6.quantity-=how;
            p6=how*goods_6.price;
            printf("Your total price is %d Baht\n",p6);
        }else if(code_p==7){
            printf("You have chosen %s with Price %.2f Baht\n",goods_7.name,goods_7.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_7.quantity-=how;
            p7=how*goods_7.price;
            printf("Your total price is %d Baht\n",p7);
        }else if(code_p==8){
            printf("You have chosen %s with Price %.2f Baht\n",goods_8.name,goods_8.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_8.quantity-=how;
            p8=how*goods_8.price;
            printf("Your total price is %d Baht\n",p8);
        }else if(code_p==9){
            printf("You have chosen %s with Price %.2f Baht\n",goods_9.name,goods_9.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_9.quantity-=how;
            p9=how*goods_9.price;
            printf("Your total price is %d Baht\n",p9);
        }else if(code_p==10){
            printf("You have chosen %s with Price %.2f Baht\n",goods_10.name,goods_10.price);
            printf("How many ? : ");
            scanf("%d",&how);
            goods_10.quantity-=how;
            p10=how*goods_10.price;
            printf("Your total price is %d Baht\n",p10);

        }else {printf("Code not found\n");}

        printf("----------------------------------------------------\n");
        FILE *fn;
        fn= fopen("list.txt","w");
        fprintf(fn,"%d %s %.2f %d\n",goods_1.code,goods_1.name,goods_1.price,goods_1.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_2.code,goods_2.name,goods_2.price,goods_2.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_3.code,goods_3.name,goods_3.price,goods_3.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_4.code,goods_4.name,goods_4.price,goods_4.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_5.code,goods_5.name,goods_5.price,goods_5.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_6.code,goods_6.name,goods_6.price,goods_6.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_7.code,goods_7.name,goods_7.price,goods_7.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_8.code,goods_8.name,goods_8.price,goods_8.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_9.code,goods_9.name,goods_9.price,goods_9.quantity);
        fprintf(fn,"%d %s %.2f %d\n",goods_10.code,goods_10.name,goods_10.price,goods_10.quantity);
        fclose(fn);


        sum+=p1+p2+p3+p4+p5+p6+p7+p8+p9+p10;

        p1=0;
        p2=0;
        p3=0;
        p4=0;
        p5=0;
        p6=0;
        p7=0;
        p8=0;
        p9=0;
        p10=0;

        printf("Do you want to continue (y/n): ");
        scanf("%s",y_n2);
        system("cls");
        }while(strcmp(y_n2, "y") == 0);

        printf("Price %.2f Baht\n",sum);

        Komlakreung(*sumG);


    }

        printf("THE SHOP IS CLOSING.\n");
    }

