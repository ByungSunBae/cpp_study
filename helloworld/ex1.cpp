#include <iostream> 
//iostream이라는 라이브러리/모듈을 사용하기 위해 불러옴
/*#include는 전처리 대상으로 컴파일 단계에서 오류가 있는지, 
라이브러리가 있는지, 파일이 있는지 점검한다.
*/

int main() {
    /*
    main() 함수는 C++의 컴파일 결과로 실행파일/바이너리 파일이 생겼을때
    처음으로 실행되는 함수로 실행 커맨드 라인에 추가 파라미터를 더하는 경우
    argc와 argv에 해당 정보가 입력된다. argc는 파라미터의 수,
    argv는 각 파라미터 정보가 들어있다.
    */
    
    std::cout << "Hello World" << std::endl;
	    //<< "My name is "
	    //<< "Bob" << std::endl;
    /*
    출력하는 부분으로 std는 iostream 라이브러리의 기본 네임
    스페이스로 std 네임스페이스 안에 cout이라는 객체를 대상으로 
    << operator를 실행한다. 입력 값은 "Hello World"라는 문자열로
    cout 객체서는 화면에 이를 출력해준다. 이어서 std::endl;은 
    새로운 줄을 나타내는 객체로 Hello World를 찍고 마지막에 새로운
    줄을 띄우도록 하고 있는 것이다.
    물론 main함수 정의하기 이전 라인에 아래와 같이 namespace를 쓴다고
    지정해도 되긴하지만 이름이 겹치는 함수를 만들면 오류가 발생하기떄문에
    권장하지 않는다.
    using namespace std;
    */

    return 0;
    //int main()의 결과 값을 리텅한다. 0은 리턴 값으로 SUCCESS를
    //의미하여 정상 종료 코드 값을 리턴하는 것이다.
}
