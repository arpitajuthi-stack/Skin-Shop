#include<stdio.h>
struct Product
{
        char product_name[50];
        float price;
        int quality;
        int item;

};
int main()
{
    FILE *fp;
    struct Product S[3];
    int i;

    for(i=0;i<3;i++)
    {

        printf("Details about product: %d \n",i+1);
        printf("\n");
        printf("Enter Product Name : \n");
        scanf("%s",S[i].product_name);
        printf("\n");
        printf("Enter Product Price : \n");
        scanf("%f",&S[i].price);
        printf("\n");
        printf("Enter Product Rating : \n");
        scanf("%d",&S[i].quality);
        printf("\n");
        printf("Enter Item : \n");
        scanf("%d",&S[i].item);
        printf("\n");
    }

    fp=fopen("Korean.txt","w");

    for(i=0;i<3;i++)
    {
        fprintf(fp,"%s\n",S[i].product_name);
        fprintf(fp,"\n");
        fprintf(fp,"%f\n",S[i].price);
        fprintf(fp,"\n");
        fprintf(fp,"%d/100\n",S[i].quality);
        fprintf(fp,"\n");
        fprintf(fp,"%d\n",S[i].item);
        fprintf(fp,"\n");

    }
     printf("\n");
     printf("\t\t\t Korean Cosmetics-Bangladesh");
     printf("\n\n\n");
     fclose(fp);


     printf("SL. \tProduct_name \t\t Price \t\t\t Quality \tItem\n\n");
        printf("\n");
        for(i=0;i<3;i++)
        {
           printf("%d.      %s\t\t\t %f\t\t %d\t\t  %d\t\n\n",i+1 , S[i].product_name, S[i].price, S[i].quality, S[i].item);
        }



        int num;
        int cost = 0;
        int pro = 1;



            printf("\nWhich product do you want to purchase?:\t");

            scanf("%d",&num);

            printf("\nHow many products you want to buy?:\t");

            scanf("%d",&pro);

            S[num - 1].item -=pro;
            cost= S[num - 1].price * pro;


            printf("\nCost is:%d\n\n",cost);

            int discount;
            float rate,total;

            printf("\nEnter rate: \n");
            scanf("%f", &rate);

            printf("\nEnter cost: %d\n\n",cost);


        if(cost > 1500)
        {
            discount = (cost * rate) * 20 /100;
        }
        else
        {
            discount = 0;
        }

        total = (rate * cost) - discount;


        fp=fopen("Product.txt","w");

         printf("\n");
         printf("\t\t\t Korean Cosmetics-Bangladesh");
          printf("\n\n\n");


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
            fprintf(fp," > PRODUCT Item = %d \n",S[i].item);
            fprintf(fp,"\n");
            fprintf(fp,"--------------\n");

        }



        printf("SL. \tProduct_name \t\t Price \t\t\t Quality \tItem\n\n");
        printf("\n");
        for(i=0;i<3;i++)
        {
           printf("%d.      %s\t\t\t %f\t\t %d\t\t  %d\t\n\n",i+1 , S[i].product_name, S[i].price, S[i].quality, S[i].item);
        }


        printf("After Discount: \n");
        printf("Total payment is %f\n", total);


        printf("\n");
        printf("Thank you for visiting our shop");

        printf("\n");

        fclose(fp);

}
