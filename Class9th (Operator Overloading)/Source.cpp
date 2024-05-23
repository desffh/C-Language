#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2& operator + (const Vector2& clone)
	{
		//return Vector2(this->x + clone.x, this->y + clone.y);
		//임시 객체를 반환
		Vector2 object(x + clone.x, y + clone.y);

		return object;
	}

	Vector2& operator --() // 전위감소연산자
	{
		this->x -= 1;
		this->y -= 1;

		return *this;
	}
	Vector2& operator --(int) // 후위감소연산자
	{
		Vector2 clone(this->x, this->y);

		this->x -= 1;
		this->y -= 1;

		return clone;
	}

	Vector2 operator * (int value)
	{
		return Vector2(this->x * value, this->y * value);
	}



	int& X()
	{
		return x;
	}
	int& Y()
	{
		return y;
	}

};
//전역함수
Vector2 operator * (int value, Vector2& clone)
{
	return value * clone;
}

int main()
{
#pragma region 연산자 오버로딩
	//Vector2 vector1(10, 10);
	//Vector2 vector2(5, 5);
	//
	//Vector2 vector3 = vector1 + vector2;
	//
	//Vector2 value(10, 10);
	//
	// //cout << "Vector3의 x값: " << vector3.X() << endl;
	////cout << "Vector3 y값: " << vector3.Y() << endl;
	//
	//--value; //전위
	//
	//cout << "value의 x값: " << value.X() << endl;
	//cout << "value의 y값: " << value.Y() << endl;
	//
	//Vector2 value2 = value--; //후위
	//
	//cout << "value2의 x값: " << value.X() << endl;
	//cout << "value2의 y값: " << value.Y() << endl;


#pragma endregion

#pragma region 연산자 오버로딩의 교환 법칙
	// 피연산자의 위치는 연산의 결과에 아무런 영향을 
	// 미치지 않는 법칙 입니다.

	//Vector2 position1(2, 5);
	//
	//Vector2 position2 = position1 * 2; 
	//// 2 * position1은 안됨(오류)
	//
	//cout << "position2의 x 값 : " << position2.X() << endl;
	//cout << "position2의 y 값 : " << position2.Y() << endl;


#pragma endregion


	return 0;
}

