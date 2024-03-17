#include <iostream>
//using namespace std;
//// std 네임스페이스를 사용하고 있다.
//
//// 네임 스페이스는 별도의 이름을 저장할 수 있는 공간이다.
//// 사용 목적 : 프로그램을 개발하다 보면 코드를 특정 그룹으로 분리하고 싶은 경우
////			   프로그램에서 자주 쓰이는 변수의 이름이 충돌되지 않게 하기 위함
//
//namespace Item
//{
//	namespace Cloth
//	{
//		string brand = "NIKE";
//	}
//}
//
//namespace A
//{
//	int a = 1;     // 정수형 변수 a
//	// 변수(variable) : 프로그램에서 사용할 데이터 형태에 이름을 붙인 것
//	//					하나의 데이터를 저장한다.
//	// 정수형 : 소수점이 없는 숫자를 의미한다.
//}
//
//namespace B
//{
//	int a = 2;
//}
//
//int main()
//{
//	cout << "안녕하세요." << endl;
//	int a = 5;
//	
//	cout << a << endl;
//	cout << A::a << endl;
//	cout << B::a << endl;
//	cout << Item::Cloth::brand << endl;
//
//	return 0;     // 함수를 종료하고 0을 전달한다.
//}