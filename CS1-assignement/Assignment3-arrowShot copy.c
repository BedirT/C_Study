#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int counter = 0,wannaPlay=1;
double chance ();                   // I am calling all
double shoot (int distance);        // my functions in here
void play ();                       // for using them into
                                    // my main function.

int main () {
    
    printf("Welcome to Archery Shooting Simulator\n");
    
    while (wannaPlay != 0){ // This loop is for us to keep play or not.
    
        srand(time(NULL)); /* We are seeding our random . This will help us to change
                        our random value everytime we run it.
                        */
        play(); // Calling play function.
    
        printf("\nEnter 0 to exit, any other value to play again: ");
        scanf("%d",&wannaPlay); // Keep looping or not ?
        printf("\n");
    
    }
    
}

double chance () {
    
    int myChance = (rand()%100); // assigning random number to myChance variable
    return (double)myChance/100; // making our chance between 0.0 to 1.0

}

double shoot (int distance) {
    
    int score;
    double chance1 = chance(); // Calling chance function
    
    if (distance==10){ /* We will take distances from play function and we will
                        initialize them in this if-else statement so that we can
                        state our chances in different distances.
                        */
        if      ((0.0 <= chance1) && (chance1 < 0.5))   { return score=5; }
        else if ((0.5 <= chance1) && (chance1 < 0.9))   { return score=3; }
        else if ((0.9 <= chance1) && (chance1 < 0.95))  { return score=1; }
        else                                            { return score=0; }
        
    }else if (distance==20){
        
        if      ((0.0 <= chance1) && (chance1 < 0.4))   { return score=5; }
        else if ((0.4 <= chance1) && (chance1 < 0.8))   { return score=3; }
        else if ((0.8 <= chance1) && (chance1 < 0.9))   { return score=1; }
        else                                            { return score=0; }
        
    }else if (distance==30){
        
        if      ((0.0 <= chance1) && (chance1 < 0.3))   { return score=5; }
        else if ((0.3 <= chance1) && (chance1 < 0.6))   { return score=3; }
        else if ((0.6 <= chance1) && (chance1 < 0.75))  { return score=1; }
        else                                            { return score=0; }
        
    }else if (distance==40){
        
        if      ((0.0 <= chance1) && (chance1 < 0.2))   { return score=5; }
        else if ((0.2 <= chance1) && (chance1 < 0.4))   { return score=3; }
        else if ((0.4 <= chance1) && (chance1 < 0.6))   { return score=1; }
        else                                            { return score=0; }
        
    }else{
        
        if      ((0.0 <= chance1) && (chance1 < 0.1))   { return score=5; }
        else if ((0.1 <= chance1) && (chance1 < 0.2))   { return score=3; }
        else if ((0.2 <= chance1) && (chance1 < 0.45))  { return score=1; }
        else                                            { return score=0; }
    }
}

void play () { // This func. is for us to simulate our shoot's result
    
    double shoot (); // We are calling the func. shoot
    
    counter++; // This is for counting the rounds
    
    printf("Round %d\n",counter); // Printing the round
    
    int distance[5] = {10,20,30,40,50}; /* We are collecting all five distances
                                         in an array for entering them into the
                                         shoot function.
                                         */
    
    int totalScore = 0; /* Everytime that we start to count the totalScore have
                         to be zero.
                         */
    
    for (int i=0;i<5;i++){  // For passing our distances

        int score=shoot(distance[i]); /* assigning shoot function's return value
                                       -which is 'score'- to a variable named
                                       score.
                                       */
        
        totalScore+=score; // Adding all new scores to the total.
        
        switch (score){ // We will print what we have as score in this distance.
            case 5:
                printf("Distance %d: 5 points, you are awesome!\n",distance[i]);
                break;
            case 3:
                printf("Distance %d: 3 points\n",distance[i]);
                break;
            case 1:
                printf("Distance %d: 1 points\n",distance[i]);
                break;
            default:
                printf("Distance %d: 0 points, what a shame!\n",distance[i]);
                break;
        }
        
    }
    printf("---------------------\n");
    printf("Total Score:%d points\n",totalScore); // Printing total score.
}