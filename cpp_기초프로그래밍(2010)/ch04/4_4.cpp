  #include<iostream>
  using namespace std;
  int abs(int x)		//main( ) �Լ��� �ڷ����� int��  �ٲ����.
  {
    	int y;			//���밪�� ������ ����
  	if(x < 0)		//���밪�� ���ϴ� ����
  		y = -x;
  	else
  		y = x;
  	return y;		//������ ������� return ������ �ǵ����ش�.
  }
  void main( )
  {
  	int a, result;
  	cout << "\n ������ �ϳ��� �Է��ϼ���. => ";
  	cin >> a;
  	result = abs(a);		//�Լ��� ������� result ��� ������ �����Ѵ�.
  	cout <<" ���� ���밪��  " << result << " �̴�. \n" ;
 }
