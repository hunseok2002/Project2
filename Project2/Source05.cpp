#include <iostream>
#include <cstdlib>   // C언어의 stdlib.h 파일 (C언어에서 특정 작업 시 추가하는 도구)
#include <ctime>   // C언어의 time.h 파일 (시간에 대한 작업)
using namespace std;

// 이번에 구현하고자 하는 프로그램은 '숫자 야구' 게임 구현

int main()
{
	/*srand(time(NULL));*/     // 랜덤에 대한 설정

	int result[3];     // 자료형 변수명[숫자]; (배열) : 같은 형태의 데이터를 숫자만큼 저장 가능
	int user[3];

	// for문이 시작되면 start가 생성된다.(1회)
	// start가 3보다 작은 동안 반복 작업을 진행한다.
	// 반복문이 1번 마무리 될 때마다 start가 1씩 증가한다.
	for (int start = 0; start < 3; start++)
	{
		result[start] = (rand() % 9) + 1;
		// result의 start번째 값이 수정된다.(배열은 0부터 넣어준 숫자 - 1 까지의 순번(index)을 가지게 된다.
		// rand()는 0부터 21767 사이의 숫자를 랜덤으로 고르는 함수이다.
		// % 9에 의해 해당 값은 9로 나누고 남은 값으로 계산된다.(0부터 8까지)
		// +1에 의해 그 결과에 1이 더해진다.(0 ~ 8) -> (1 ~ 9)

		// 현재의 start의 값 만큼 반복을 진행하는 코드
		for (int check = 0; check < start; check++)
		{
			// start 위치의 result와 check 위치의 result가 같으면서, start와 check의 값이 서로 다른 경우
			if (result[start] == result[check] && start != check)
			{
				start--;     // start의 값을 1 제거한다.
				// 의도 : 이 코드로 인해 start의 값이 1 감소하게 되면
				// 밖에 있는 for문에 의해 다시 start가 1 증가 하면서 
				// 다음 값이 아닌 동일한 위치에서 다시 반복을 진행하게 될 것이다.
			}
		}

		//cout << result[start] << " ";
	}

	int count = 1;   // 진행 회차를 표현할 변수
	int strike;   // 스트라이크의 개수를 표현하기 위한 변수
	int ball;   // 볼의 개수를 표현하기 위한 변수

// [게임 시작]
	// 계속 반복하는 무한 루프문 (프로그램 실행용)
	while (true)
	{
		cout << "[" << count++ << "회차 숫자야구]" << endl;
		// count++는 count에 대한 작업(연산)을 마무리 한 뒤, count를 1 증가시키는 기능
		// 위의 코드는 count에 대한 출력을 마무리 하고, count를 1 증가시킨다.
		// 화면 상에서는 원래 값이 나오고, 다음 작업 때 증가된 것처럼 보일 것이다.


		// 숫자에 대한 입력을 진행한다.
		// 조건) 이 숫자는 반드시 1 부터 9 사이의 숫자
		// 잘못된 숫자를 입력했을 경우에는 다시 입력하도록 연출
		while (true)
		{
			cout << "1부터 9까지의 숫자를 입력하세요 >> ";
			cin >> user[0] >> user[1] >> user[2];   // user의 0, 1, 2 순으로 입력 가능 (띄어쓰기로 구분)
			
			// user[0]이 1보다 작다. 또는 user[0]이 9보다 크다.
			bool check1 = user[0] < 1 || user[0] > 9;
			bool check2 = user[1] < 1 || user[1] > 9;
			bool check3 = user[2] < 1 || user[2] > 9;

			// 중복 조건
			bool dup2 = user[0] == user[1];
			bool dup1 = user[0] == user[1];
			bool dup3 = user[1] == user[2];

			if (check1 || check2 || check3)
			{
				cout << "범위 외의 숫자를 입력할 수 없습니다. 다시 입력해주세요." << endl;
				continue;   // 작업을 건너뛰다.
			}

			// [사용자가 중복된 값을 입력하지 못하도록 설정]
			// else if는 위에 있는 if문과 연결해서 사용하는 if문이다. 위의 조건이 만족할 경우 아래의 코드는 실행하지 않는다.
			else if (dup1 || dup2 || dup3)
			{
				cout << "중복된 값이 존재해서는 안됩니다." << endl;
				continue;
			}

			break;   // while문을 종료하게 된다.
		}
	}

	return 0;
}