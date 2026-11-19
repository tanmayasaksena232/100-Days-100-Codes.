//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char signal[10];
    enum TrafficLight light;

    scanf("%s", signal);

    if (strcmp(signal, "RED") == 0)
        light = RED;
    else if (strcmp(signal, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(signal, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid Input");
        return 0;
    }

    switch (light) {
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