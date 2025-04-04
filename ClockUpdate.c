#include <stdio.h>
#include <time.h>
#include <unistd.h>

//For who ever actually looks at the source code I have no idea how this is
//running tbh so dont bother trying to understand what I did or why. :D

int main() {
    char input;
    int choices;
    int i;

    printf("1. Clock\n");
    printf("2. Timer\n");
    printf("3. Set Alarm\n");
    printf("Select Options 1-3\n");
    scanf("%d", &choices);

    switch(choices) {
    case 1:
        while(1) {
    system("cls");
    time_t t;
    time(&t);
    printf("%s", ctime(&t));
    sleep(1);
            }
    case 2:
        for (i =1; i < 31536000; ++i)
        printf("%d", i);
        sleep(1);
        break;

        //Ik its broken... -_-

    case 3:
        printf("No Idea How To Code That Yet But Im Working On It\n");
        break;
    }
    return 0;
}

//
