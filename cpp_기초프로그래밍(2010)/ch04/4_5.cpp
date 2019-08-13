 #include<iostream>
 using namespace std;
 //int max(int, int) ;            //함수의 프로토타입 선언한다.
 void main( )
 {
    int a, b;               // 정수형으로 두 개의 변수를 선언한다.
    cout << "\n 정수값을 두 개 입력하세요. => ";
    cin >> a >> b;
    cout << " 최대값 => " << max(a, b) <<"\n";   
 }
 int max(int x, int y)
 {
    return ( (x > y) ? x : y );      // return문에 조건 연산자를 직접 써준다.
 }
