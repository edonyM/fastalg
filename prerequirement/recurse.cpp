 /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 #        .---.         .-----------
 #       /     \  __  /    ------
 #      / /     \(  )/    -----   (`-')  _ _(`-')              <-. (`-')_
 #     //////    '\/ `   ---      ( OO).-/( (OO ).->     .->      \( OO) )     .->
 #    //// / //  :   : ---      (,------. \    .'_ (`-')----. ,--./ ,--/  ,--.'  ,-.
 #   // /   /  / `\/ '--         |  .---' '`'-..__)( OO).-. ' |   \ |  | (`-')'.'  /
 #  //          //..\\          (|  '--.  |  |  ' |( _) | | | |  . '|  |)(OO \    /
 # ============UU====UU====      |  .--'  |  |  / : \|  |)| | |  |\    |  |  /   /)
 #             '//||\\`          |  `---. |  '-'  /  '  '-' ' |  | \   |  `-/   /`
 #               ''``            `------' `------'    `-----' `--'  `--'    `--'
 # ######################################################################################
 #
 # Author: edony - edonyzpc@gmail.com
 #
 # twitter : @edonyzpc
 #
 # Last modified: 2015-05-11 15:17
 #
 # Filename: recurse.cpp
 #
 # Description: All Rights Are Reserved
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <cstdio>
#include <ctime>

long FactMult(int num) {
    if (num == 1) {
        return 1;
    }
    else {
        return num * FactMult(num - 1);
    }
}

long FactMultTail(int num, int cal) {
    if (num == 1) {
        return cal;
    }
    else {
        return FactMultTail(num - 1, cal * num);
    }
}

int main() {
    int num_fact;
    scanf("%d", &num_fact);
    long result;
    clock_t start1, finish1;
    start1 = clock();
    result = FactMult(num_fact);
    printf("%d",result);
    finish1 = clock();
    printf("time: %d, %d\n", finish1 - start1, result);
    long result_tail;
    clock_t start2, finish2;
    start2 = clock();
    result_tail = FactMultTail(num_fact, 1);
    printf("%d",result_tail);
    finish2 = clock();
    printf("time: %d, %d\n", finish2 - start2, result_tail);
    return 0;
}
