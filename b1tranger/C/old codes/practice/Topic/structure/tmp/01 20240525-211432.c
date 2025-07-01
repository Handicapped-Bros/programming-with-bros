#include<stdio.h>
#include<string.h>

struct books
{
    char title[100];
    float count;
    float price;
} book[100];

void nameIn(int i)
{
//struct books book[100];
//char tmp[100];
    printf("\n\nInput info of Book #%d:\nBook Name: ",i);
    //gets(tmp);
    //strcpy(book[i].title,tmp);
    scanf("%[^\n]",book[i].title);
    printf("entered book %s\n",book[i].title);
}

int main()
{
// int n;
    float total = 0,cost = 0;
//  printf("Input the no. of books:\n");
//scanf("%d",&n);

    //struct books book[100];
//struct books book1;
//for(int i = 1; i<=n; i++)
    for(int i = 1; i<=2; i++)
    {
//nameIn(i);
        printf("\n\nInput info of Book #%d:\nBook Name: ",i);
        //gets(tmp);
        //strcpy(book[i].title,tmp);
        scanf("%[^\n]",book[i].title);
        printf("\nBook Entered %s\n",book[i].title);
        printf("\nBook quantity: ");
        scanf("%f",&book[i].count);
        printf("\nBook price: ");
        scanf("%f",&book[i].price);
        printf("\n\n");
        total = total + book[i].count*book[i].price;


    }
    cost = total + total*10/100 + 50;

    printf("\n\nBooks listed are:\n");
    // for(int i = 1; i<=n; i++)
    for(int i = 1; i<=2; i++)
    {
        printf("%.0f copies of %s\n",book[i].count, book[i].title);
    }
    printf("\nTotal payable: %.2f\n",cost);

    return 0;
}
