#include<stdio.h>
struct Product
{

        char product_name[50];
        int price;
        int quality;
        int product_no;

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
        scanf("%d",&S[i].price);
        printf("\n");
        printf("Enter Product Rating : \n");
        scanf("%d",&S[i].quality);
        printf("\n");
        printf("Enter Product ID : \n");
        scanf("%d",&S[i].product_no);
        printf("\n");
    }

    fp=fopen("Skin.txt","w");

    for(i=0;i<3;i++)
    {
        fprintf(fp,"%s\n",S[i].product_name);
        fprintf(fp,"\n");
        fprintf(fp,"%d\n",S[i].price);
        fprintf(fp,"\n");
        fprintf(fp,"%d/100\n",S[i].quality);
        fprintf(fp,"\n");
        fprintf(fp,"%d\n",S[i].product_no);
        fprintf(fp,"\n");

    }
    fclose(fp);
}




