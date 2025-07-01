#include<stdio.h>
#include<string.h>

int main()
{
    int N;
    float total = 0,cost = 0;
    printf("Input the no. of book titles:\n");
    scanf("%d",&N);
printf("_________________________________________\n");
    struct books
{
    char title[100];
    float count;
    float price;
}book[N];

    for(int i = 1; i<=N; i++)
    {
        printf("\nInput info of Book #%d:\nBook Name: ",i);
        scanf(" %[^\n]",&book[i].title);
        //fgets(book[i].title, sizeof(book[i].title), stdin);
        printf("Book quantity: ");
        scanf("%f",&book[i].count);
        printf("Book price: ");
        scanf("%f",&book[i].price);
        printf("_________________________________________\n");
        total = total + book[i].count*book[i].price;
    }
    printf("\nentries listed are:\n");
    for(int i = 1; i<=N; i++)
    {
        printf("%d. %s (%.0f copies)\n",i,book[i].title,book[i].count);
    }

    cost = total + total*10/100 + 50;
    printf("\n\nTotal payable: %.2f\n",cost);
    printf("\n\n[ Tax included 10%% on Total amount (%.2f) ]\n[ Shipping Charge is tk 50 ]\n",total*10/100);

    return 0;
}
