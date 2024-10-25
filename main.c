#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unity.h"

int solution(int X, int Y, int D)
{   
    if(X==Y)
        return 0;
    else if((Y-X)%D==0)
        return (Y-X)/D;
    else
        return (Y-X)/D+1;
}



void setUp(void) 
{
    printf("\nUnity Test started.\n");
}

void tearDown(void) 
{
    printf("\nUnity Test ended.\n");
}
void odd_occurrences_in_array(void) 
{
    int A[] = {1,1,2,2,3,3,3};
    TEST_ASSERT_EQUAL_INT( 0, solution(30,30,10));
    TEST_ASSERT_EQUAL_INT( 1, solution(30,40,10));
    TEST_ASSERT_EQUAL_INT( 2, solution(30,45,10));
}

int main()
{

    UNITY_BEGIN();
    RUN_TEST(odd_occurrences_in_array);
    return UNITY_END();
}
