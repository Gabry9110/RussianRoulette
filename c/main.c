#include <stdio.h>


void clearBuffer() {
    int c;  // we don't actually need the value of this
    while ((c = getchar()) != '\n' && c != EOF);

    // getchar() takes a single char as input and clears it from the buffer
    // we run it until it goes to \n (end of input), since it only works with what's on top of the buffer
    // if stdin has issues, getchar will recieve EOF
}

int chooseMode() {
    int modeChosen;

    printf("Select a mode:\n");
    printf("0) Quit\n");
    printf("1) Single shot\n");
    // only single shot mode for now, can possibly add more modes later on

    do {
        if (scanf("%d", &modeChosen) != 1) {
            printf("Invalid input, try again!\n");
            clearBuffer();  // we used stinky scanf just now
        } else {
            break;
        }
    } while (1);
    
    return modeChosen;
}


int main() {
    int mode;
    printf("Welcome to russian roulette simulator!\n");

    do {
        mode = chooseMode();
        switch (mode) {
        case 0:
            printf("Quitting...\n");
            break;
        case 1:
            printf("todo lololololol\n");
            break;
        
        default:
            break;
        }
    } while (mode != 0);
    
    return 0;
}