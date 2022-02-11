#include "unity.h"
#include "operation.h"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void p0wer();
void square();
void cube();
void squareroot();
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_fact(void);
void test_p0wer(void);
void test_square(void);
void test_cube(void);
void test_squareroot(void);

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
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_subtract);
    return UNIY_END();
    }
void test_subtract(void){
    int number1, number2;
    int compute=number1-number2;
    TEST_ASSERT_EQUAL(number1-number2, compute);

} 
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_multiply);
    return UNIY_END();
    }
void test_modulus(void){
    int number1, number2;
    int compute=number1*number2;
    TEST_ASSERT_EQUAL(number1*number2, compute);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_divide);
    return UNIY_END();
    }
void test_divide(void){
    int number1, number2;
    int compute=number1/number2;
    TEST_ASSERT_EQUAL(number1/number2, compute);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_modulus);
    return UNIY_END();
    }
void test_modulus(void){
    int number1, number2;
    int compute=number1%number2;
    TEST_ASSERT_EQUAL(number1%number2, compute);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_fact);
    return UNIY_END();
    }
void test_fact(void){
    int n, factorial;
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    TEST_ASSERT_EQUAL(n,factorial);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_p0wer);
    return UNIY_END();
    }
void test_p0wer(void){
    double base;
    double p;
    double e=pow(base,p);
    TEST_ASSERT_EQUAL(pow(base,p),e);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_square);
    return UNIY_END();
    }
void test_square(void){
    double b;
    double p=pow(b,2);
    TEST_ASSERT_EQUAL(pow(b,2),p);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_cube);
    return UNIY_END();
    }
void test_cube(void){
    double b;
    double p=pow(b,3);
    TEST_ASSERT_EQUAL(pow(b,3),p);
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_squareroot);
    return UNIY_END();
    }
void test_sqaureroot(void){
    double b;
    double s= sqrt(b);
    TEST_ASSERT_EQUAL(b,s);
}




