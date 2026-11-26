
/*
Q132: Define an enum for traffic lights
(RED, YELLOW, GREEN) and print
Stop, Wait, or Go based on its value.

Sample Test Case:
Input: GREEN
Output: Go
*/

#include <stdio.h>
#include <string.h>

enum Traffic {
    RED, YELLOW, GREEN
};

int main() {

    char light[20];
    enum Traffic signal;

    scanf("%19s", light);

    if (strcmp(light, "RED") == 0)
        signal = RED;

    else if (strcmp(light, "YELLOW") == 0)
        signal = YELLOW;

    else if (strcmp(light, "GREEN") == 0)
        signal = GREEN;

    else {
        printf("Invalid light");
        return 0;
    }

    switch (signal) {

        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
