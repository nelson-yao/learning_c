#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* initiate array. 3 because need a space for the sentinal character*/
    char card_name[3]; 

    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }
    printf("The card value is %i\n", val);
    if (val >= 3 && val <= 6){
        puts("Count has gone up");
    }else if(val == 10){
        puts("Count has gone down");
    }
    return 0;
}