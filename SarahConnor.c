#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NAME_LENGTH 50
#define MAX_THREATS 10

// Structure to represent a person
typedef struct {
    char name[MAX_NAME_LENGTH];
    int threatLevel; // 0: No threat, 1: Possible threat, 2: High threat
} Person;

// Function to identify threats
void identifyThreat(Person *p) {
    if (strcmp(p->name, "Sarah Connor") == 0) {
        p->threatLevel = 2; // High threat
        printf("Alert: %s identified as a high threat! (Terminator protocol activated)\n", p->name);
    } else if (strstr(p->name, "Connor") != NULL) {
        p->threatLevel = 1; // Possible threat
        printf("Warning: %s is a possible threat. (Do not trust Skynet!)\n", p->name);
    } else {
        p->threatLevel = 0; // No threat
        printf("Status: %s is not a threat. (Maybe they're just a time traveler?)\n", p->name);
    }
}

// Function to simulate checking the threat level
void checkThreatLevel(Person *p) {
    switch (p->threatLevel) {
        case 0:
            printf("Threat level for %s: Safe. (Maybe grab some popcorn instead?)\n", p->name);
            break;
        case 1:
            printf("Threat level for %s: Caution advised. (Better hide the time machine!)\n", p->name);
            break;
        case 2:
            printf("Threat level for %s: Extreme caution! (Send in the Terminators!)\n", p->name);
            break;
        default:
            printf("Unknown threat level for %s. (Recalculating...)\n", p->name);
            break;
    }
}

// Function to generate a random Terminator quote
void randomTerminatorQuote() {
    const char *quotes[] = {
        "I'll be back.",
        "Come with me if you want to live.",
        "It's not a tumor!",
        "Hasta la vista, baby!",
        "I'm a cybernetic organism. Living tissue over a metal endoskeleton."
    };
    int randomIndex = rand() % (sizeof(quotes) / sizeof(quotes[0]));
    printf("Terminator says: \"%s\"\n", quotes[randomIndex]);
}

// Function to simulate a battle scenario
void simulateBattle(Person *p) {
    printf("Simulating battle against %s...\n", p->name);
    if (p->threatLevel == 2) {
        printf("Warning! Sending T-800 units...\n");
        printf("Battle Outcome: T-800 units have neutralized the threat!\n");
    } else if (p->threatLevel == 1) {
        printf("Deploying T-1000...\n");
        printf("Battle Outcome: T-1000 is confused and retreats to the future!\n");
    } else {
        printf("No battle required. Just send them back to their timeline!\n");
    }
}

int main() {
    srand(time(NULL)); // Seed for random number generation

    // List of persons to check
    Person people[] = {
        {"John Connor", 0},
        {"Sarah Connor", 0},
        {"Kyle Reese", 0},
        {"Terminator", 0},
        {"T-800", 0},
        {"T-1000", 0},
        {"Someone Else", 0}
    };

    int numPeople = sizeof(people) / sizeof(people[0]);

    for (int i = 0; i < numPeople; i++) {
        printf("\nChecking: %s...\n", people[i].name);
        identifyThreat(&people[i]);
        checkThreatLevel(&people[i]);
        randomTerminatorQuote();
        simulateBattle(&people[i]);
    }

    printf("\nAll checks complete! Remember: The future is not set. There is no fate but what we make for ourselves.\n");
    
    return 0;
}
