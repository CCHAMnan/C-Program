#include<stdio.h>
#include<stdlib.h>

int BUFFER_SIZE = 10;
typedef struct{
    int x;
    int y;
} item;

int main()
{
    int choice;

    item next_produced;
    item next_consumed;

    item buffer[BUFFER_SIZE];

    int in = 0;
    int out = 0;
    int count = 0;

    NEXTMENU:

    printf("Available items: %d", count);

    printf("\n\n1. Produce item \n");
    printf("2. Consume item \n");
    printf("3. Exit");

    printf("Please choose from 1-3: ");
    scanf("%d", &choice);

    if(choice == 1) {
        

        if((in + 1) % BUFFER_SIZE == out) {
            count = BUFFER_SIZE;
            printf("\n\nThe buffer is full!\n\n");
        }
        else {
            next_produced.x = 10*in + 1;
            next_produced.y = 20*in + 1;

            buffer[in] = next_produced;
            in = (in + 1) % BUFFER_SIZE;
            count = in;
        }
        goto NEXTMENU;
    }
    else if(choice == 2) {
        if(count == 1)
            count--;
        if(in == out) {
            printf("\n\nThe buffer is empty!\n\n");
        }
        else {
            next_consumed = buffer[out];
            printf("\nItem(%d, %d)", next_consumed.x, next_consumed.y);
            out = (out + 1) % BUFFER_SIZE;
            count--;
        }

        goto NEXTMENU;
    }
    else if(choice == 3) {
        printf("\n\nYou're exiting...\n\n");
    }
    else {
        printf("Please enter a number from 1-3!");
        goto NEXTMENU;
    }



    return 0;
}