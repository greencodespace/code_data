 #include<iostream>
 using namespace std;
 //int max(int, int) ;            //�Լ��� ������Ÿ�� �����Ѵ�.
 void main( )
 {
    int a, b;               // ���������� �� ���� ������ �����Ѵ�.
    cout << "\n �������� �� �� �Է��ϼ���. => ";
    cin >> a >> b;
    cout << " �ִ밪 => " << max(a, b) <<"\n";   
 }
 int max(int x, int y)
 {
    return ( (x > y) ? x : y );      // return���� ���� �����ڸ� ���� ���ش�.
 }
