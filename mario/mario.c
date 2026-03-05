#include <stdio.h>
#include <cs50.h>

void print_pyramid(int height);
int main(void)
{
    int h = 0;
    bool good_input = false;
    do{
        h = get_int("What height do you want the Pyramid? ");
        if ( h > 0){
            good_input = true;
        }

    } while (!good_input);
    print_pyramid(h);
}
void print_pyramid(int height){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < i; j++){
            printf("#");
        }
        printf("\n");
    }
}
