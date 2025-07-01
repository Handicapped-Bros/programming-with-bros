#include<stdio.h>
int main () 
{
    float a,b,c,d; //let's say, 'a' for the work hour and 'b' for the requested time
    
   printf("Writer: Hi. Thank you for you kind support. (I am available from "); scanf("%f", &a);
    printf(" to "); scanf("%f", &b); 
    printf(") When do you want to meet up?\n\nVisitor: Hello. I want an appointment from "); scanf("%f", &c); 
    printf(" to "); scanf("%f", &d);
    printf("\n\nWriter: Okay, let me check my schedule.\n\nVisitor: OK.\n\n");
    
   if(a<=c && c<=b && a<=d && d<=b)
   {printf("Writer: Alright, I'am free to meet you at the appointed time. \n\nVisitor: Thanks!");}
   else
   {printf("Writer: Sorry, friend. I am not available at that time. \n\nVisitor: :')");}
    


    return 0;
}



/*


Mahin,
"Tore task dei. Solve kor Eitay. ekta lore ase. Dhor tui ekta Writer er assistant
Tore manage korte hoy ekta visitor writer ke free time e visit korar jnno appointment nicche kina
Ekta program likh c te jekhane input er first line hbe writer er boi lekhar starting r ending time e.g.(16.00-22.00)
R second line er input hbe visitor er visit korte chawar time (17.00-17.30)
Tore ber korte hbe visitor appointment pabe kina
Paile output hbe you will get the appointment
Na paile hbe sorry he is not available
Khub easy ekta program"


Mahin,"Khub easy ekta program. 
But mara khabi kothay bole dei. 
Jkhn duita diner moddhe overlap korbe"

Ahanaf,"Overlap kortese kina,eta to array diyei dekha jay"

Mahin,"Ami jeta krsilm etay arektu pera asilo.
Oita hocche dine jotota appointment req ashe shbgula input dite hbe.
Then check hbe koyta appointment accept kora possible."

*/