#include <iostream>

int main(void)
{
    char str1[] = "My String"; // 변수 형태의 문자열
    char *str2 = "Your String"; // 상수 형태의 문자열
    printf("%s %s \n", str1, str2);

    str2="Our String"; // 가리키는 대상 변경
    printf("%s %s \n", str1, str2);

    str1[0] = 'X'; // 문자열 변경 성공!
    //str2[0] = 'X'; // 문자열 변경 실패!
    printf("%s %s \n", str1);
    return 0;
}

/*
명심해야할 사항
 - 컴파일은 되지만 str2[0] = 'X' 부분에서 그냥 종료되거나 무시되는 경우가 존재한다.
 - 일부 컴파일러는 해당 부분의 연산을 허용한다.
 - 다른 컴파일러로 수행시 결과가 달리 나올 수 있다.
 - 따라서, 상수 형태의 문자열로 선언된 경우 상수로 간주하여 값을 변경시키지 않아야한다.ㅠ
*/