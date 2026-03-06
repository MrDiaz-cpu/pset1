#include <stdio.h>
#include <cs50.h>

int greedy(int change, int count);
int main(void)
{
    int coin_count = 0;
    int x = get_int("Change owed: ");
    printf("%i\n", greedy(x, 0));
}
/*
Greedy function to find least amount of coins to return as change.
input: int change - amount of change to find the least amount of change for
        int count - the current amount of coins
output: least amount of coins int
*/
int greedy(int change, int count){

    int new_change = change;
    if (change - 25 >= 0){
        new_change = change - 25;
        count++;
    } else if (change - 1 >= 0){
        new_change = change - 1;
        count++;
    } else if (change == 0){
        return count;
    }
    //HINT:
    //check if you can take a 'bite' of 10 cents from change
    // you could do something like change - dime > 0
    // if it is update the number
    // you could do something like new_change = change - dime
    // update the coin count
    // repeat the same steps above but for a nickle aka 5 cents and you are done
    return greedy(new_change, count);
}
