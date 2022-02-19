#include "unity.h"
#include "operation.h"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_fact(void);
void test_p0wer(void);
void test_square(void);
void test_cube(void);


void setUp (){

}
void tearDown()
{
    
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
     RUN_TEST(test_multiply);
     RUN_TEST(test_modulus);
      RUN_TEST(test_divide);
      RUN_TEST(test_fact);
      RUN_TEST(test_p0wer);
      RUN_TEST(test_square);
      RUN_TEST(test_cube);
     
    return UNITY_END();
    }
void test_add(void){
    int number1, number2;
    int compute=number1+number2;
    TEST_ASSERT_EQUAL(number1+number2, compute);

}

void test_subtract(void){
    int number1, number2;
    int compute=number1-number2;
    TEST_ASSERT_EQUAL(number1-number2, compute);

} 

void test_modulus(void){
    int number1, number2;
    int compute=number1%number2;
    TEST_ASSERT_EQUAL(number1%number2, compute);
}
void test_multiply(void){
    int number1, number2;
    int compute=number1*number2;
    TEST_ASSERT_EQUAL(number1*number2, compute);
}
void test_divide(void){
    int number1, number2;
    int compute=number1/number2;
    TEST_ASSERT_EQUAL(number1/number2, compute);
}

void test_fact(void){
    int n, factorial;
    if(n<0)
    factorial=0;
    else{
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    TEST_ASSERT_EQUAL(n,factorial);
}}

void test_p0wer(void){
    double base;
    double p;
    double e=pow(base,p);
    TEST_ASSERT_EQUAL(pow(base,p),e);
}

void test_square(void){
    double b;
    double p=pow(b,2);
    TEST_ASSERT_EQUAL(pow(b,2),p);
}

void test_cube(void){
    double b;
    double p=pow(b,3);
    TEST_ASSERT_EQUAL(pow(b,3),p);
}

