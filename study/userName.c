#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> // These are the libraries that I use.
#include <math.h>

int main () // Start
{
	int userName; // this lanes are where I define my variables
    int password;
    int number = 0; /* I made number equals to 0 because we will use this term to terminate the program when user make incorrect entry. */
    int i;
    int newPassword;
    int newPassword2;
    int userName1;
    
    
    while (userName != 123456 || password != 1234){ /* While , is where we start to loop our program. From this statement it says, program will make circles until you enter the correct User name and password. or crush the program. */
        
        printf("User Name: "); // This lanes are where we print
        scanf(" %d", &userName); // Where we take the input from user
        
        printf("Password:  ");
        scanf(" %d", &password);
        
        printf("-------------------------------------------------------------------------------------------------------\n\n");
        
        number++; // we will make the "number" rise because in 3rd entry we want to terminate the program
        
        if( number<3 && (userName != 123456 || password != 1234 ) ) { // We added an if statement because we want from the program to warn user.
            
            printf("\nInvalid entry, 3 incorrect entry will terminate the program.\n");
            
            printf("WARNING! %d. wrong entry \n\n", number);
            
            printf("-------------------------------------------------------------------------------------------------------\n\n");
        
        }else if( number==3 && (userName != 123456 || password != 1234 )) { // We are adding one else if statement because we want to terminate the program in a specific condition which is 3 wrong entry.
            
            printf("\nInvalid entry, 3 incorrect entry will terminate the program.\n");
            
            printf("WARNING! %d. wrong entry \n", number);
            
            printf("\tSystem will shut itself ...\n");
            
            printf("-------------------------------------------------------------------------------------------------------\n\n");

            break; // With break statement we shut the program. Basically break is ending the loop.
        
        }else{
            
            printf("\tSuccessful first login! Please change your passoword immediately. \n\n"); // Message for a successful entry.
            
            printf("New Pasword must be all numbers and 4 character (Cannot use temporary password). \n\n"); // Message for a successful entry.
            
            printf("-------------------------------------------------------------------------------------------------------\n\n");

            char lenght[20];
            
            int l;
            
            do{
                printf("New password: ");
                scanf(" %d", &newPassword);
                
                if ( ((newPassword > 999) && (newPassword < 10000)) && newPassword != 1234 ) {
                    
                    printf("\nChange Succesful.\n ");
                    
                    printf("-------------------------------------------------------------------------------------------------------\n\n");

                    break;
                
                }else{
                    
                    printf("Please try again\n\n");
                }
                
            }while( newPassword == 1234 || newPassword < 999 || newPassword > 10000 );             // From now on we changed our password. So we have to enter it now.
        
            int a = 0;
            
            while ((userName1 != userName) || (newPassword2 != newPassword)){       // Statement for checking the corrections both userName and password...
                
                printf("Please enter your new password and ID \n");
                
                printf("User Name: \n");
                scanf(" %d", &userName1);
                
                printf("Password: \n");
                scanf(" %d", &newPassword2);
                
                a++;                                                                // We need to break the loop so we will add 'a' for count us attempts.
                
                if ( (userName1 == userName) && (newPassword == newPassword2) ) {   // WELL ENTRY ...
                    
                    printf ("\n!------------------WELCOME------------------! \n");
                    
                }else if( a < 3 && (userName1 != userName || newPassword != newPassword2) ){
                    
                    printf("Failed attemp %d\n", a);                                // We do not just have wrong and correct steps. We also have this layer, WARNING the user.
                    
                    printf("Invalid entry, 3 incorrect entry will terminate the program.\n");
                    
                    printf("Unvalid login , please re-try ...\n");
                    
                    printf("-------------------------------------------------------------------------------------------------------\n\n");
                    
                }else if(a == 3 && (userName1 != userName || newPassword != newPassword2)){
                    
                    printf("Invalid entry, 3 incorrect entry will terminate the program.\n");
                    
                    printf("WARNING! %d. wrong entry \n", number);                  // If we reach our attemp limits, thats where we need to stop ... 3 attempts and shut down.
                    
                    printf("System will shut itself ...\n");
                    
                    printf("-------------------------------------------------------------------------------------------------------\n\n");

                    
                    exit(0); // With exit statement we shut the program.
                }
            }
            
        }
    }
	return 0; // Finishing ... Thanks.
}
