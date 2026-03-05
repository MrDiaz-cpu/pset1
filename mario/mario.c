#include <stdio.h>
#include <cs50.h>

void print_pyramid(int height);
int main(void)
{
    int h = 0;
    bool good_input = false;
    // This do while loop will keep running until the user inputs a positive whole number.
    do{
        h = get_int("What height do you want the Pyramid? ");
        if ( h > 0){
            // If the user gives us a positive number to work with we can quit the loop and call our print_pyramid function
            good_input = true;
        }

    } while (!good_input);
    print_pyramid(h);
}

/* TODO: This is what you have to fix. Currently it prints out a pyramid like this 
#
##
###
####
You should fix it so it prints out like this:
   # 
  ##
 ###
####

*/
void print_pyramid(int height){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < i; j++){
            printf("#");
        }
        printf("\n");
    }
}
