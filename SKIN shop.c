#include<stdio.h>
struct product
{
    char product_name[50];
    int price;
    int quality;
    int amount;
};
int main()
{




    int i;
    int num;
    FILE *fp;
    fp = fopen("SKIN SHOP.txt","w");

    struct product S[3];

    if(fp==NULL)

        {

        printf("FILE HAS NOT BEEN CREATED");

        }

        else

        {

        printf("FILE HAS BEEN CREATED\n");



        for(i=0;i<3;i++)
        {
            printf("ENTER INFORMATIONS FOR PRODUCT NUMBER %d\n",i+1);

            printf("PRODUCT NAME : \n");
            scanf("%s",S[i].product_name);
            fprintf(fp, "%s\n", S[i].product_name);
            printf("\n");
            printf("ENTER PRODUCT PRICE : \n");
            scanf("%d",&S[i].price);
            fprintf(fp, "%d\n",S[i].price);
            printf("\n");
            printf("ENER PRODUCT QUALITY : \n");
            scanf("%d",&S[i].quality);
            fprintf(fp, "%d\n",S[i].quality);
            printf("\n");
            printf("ENTER PRODUCT AMOUNT : \n");
            scanf("%d",&S[i].amount);
            fprintf(fp, "%d\n",S[i].amount);
            printf("\n");

        }
        printf("\n");
        printf("THANK YOU");

        printf("\n");

        fclose(fp);



        printf("Product_name \t\t Price \t\t Quality \t\t Amount");
        printf("\n");
        for(i=0;i<3;i++)
        {
           printf("%d >%s\t\t %d\t\t %d \t\t\t %d\n",i+1 , S[i].product_name, S[i].price, S[i].quality, S[i].amount);
        }







        int cost = 0;
        int pro = 1;



            printf("WHICH PRODUCT DO YOU WANT TO BUY?");

            scanf("%d",&num);
            printf("HOW MANY DO YOU WANT TO BUY??\n");
            scanf("%d",&pro);

            S[num - 1].amount -= pro;
            cost= S[num - 1].price * pro;


            printf("YOUR TOTAL COST IS %d\n",cost);


int qty,dis;
float rate,total;

printf("Enter rate and quantity\n");
scanf("%f %d", &rate, &qty);

        if(qty > 1500)
        {
            dis = (qty * rate) * 10 /100;
        }
        else
        {
            dis = 0;
        }

        total = (rate * qty) - dis;

        printf("Total paid is %f\n", total);




                fp=fopen("MAIN.txt","w");

        fprintf(fp,"  \t\t\t\t\t\t\^^ Korean SHOP ^^\t\t\t\n");
        fprintf(fp,"\n");
        fprintf(fp,"\n");
        fprintf(fp,"\n");

        for(i=0;i<3;i++)

        {

            fprintf(fp,"\n");
            fprintf(fp," > PRODUCT NAME = %s \n",S[i].product_name);
            fprintf(fp,"\n");
            fprintf(fp," > PRODUCT PRICE = %d\n",S[i].price);
            fprintf(fp,"\n");
            fprintf(fp," > PRODUCT QUALITY = %d \n",S[i].quality);
            fprintf(fp,"\n");
            fprintf(fp," > PRODUCT AMOUNT = %d \n",S[i].amount);
            fprintf(fp,"\n");
            fprintf(fp,"--------------\n");

        }




        }
        fclose(fp);


}

