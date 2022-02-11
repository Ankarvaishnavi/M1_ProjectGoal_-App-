#include "unity.h"
#include "operation.h"
void addition();
void test_add(void);

void setUp (){

}
void tearDown()
{
    
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNIY_END();
    }
void test_add(void){
    int number1, number2;
    int compute=number1+number2;
    TEST_ASSERT_EQUAL(number1+number2, compute);

}    



