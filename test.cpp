#include "foreach.h"
#include <cstdio>

int main(void) {
    int my_array[] = {1923, 34, 3772, 39839, 73332, 10240};
    char another_array[] = {'o', 'i', ' ', 'm', 'a', 't', 'e'};
    foreach(test, my_array)
    {
        foreach(test2, another_array)
        {
            printf("%c", test2);
        }
        printf("\n%d\n", test);
    }
}