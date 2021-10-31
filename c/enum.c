#include <stdio.h>

typedef enum
{
    Ready = 1,
    Busy  = 2,
    Completed = 4
} State;


int main()
{
    State state;

    scanf("%d", &state);

    switch(state)
    {
        case Ready:
        printf("State Ready\n");
        break;

        case Busy:
        printf("State Busy\n");
        break;

        case Completed:
        printf("State Completed\n");
        break;

        default:
        printf("Unknown State\n");
        break;
    }


    int currentState = Ready | Completed;

    if (state & currentState)
    {
        printf("currentState\n");
    }

    return 0;
}