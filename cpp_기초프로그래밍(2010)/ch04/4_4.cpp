  #include<iostream>
  using namespace std;
  int abs(int x)		//main( ) 함수의 자료형이 int로  바뀌었다.
  {
    	int y;			//절대값을 저장할 변수
  	if(x < 0)		//절대값을 구하는 공식
  		y = -x;
  	else
  		y = x;
  	return y;		//구해진 결과값을 return 문으로 되돌려준다.
  }
  void main( )
  {
  	int a, result;
  	cout << "\n 정수값 하나를 입력하세요. => ";
  	cin >> a;
  	result = abs(a);		//함수의 결과값을 result 라는 변수에 대입한다.
  	cout <<" 구한 절대값은  " << result << " 이다. \n" ;
 }
