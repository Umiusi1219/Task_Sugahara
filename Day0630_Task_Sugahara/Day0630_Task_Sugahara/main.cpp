#include <stdio.h>

//��P��
//x, y���W�����\����Vector2���A
//����Ă��������B
//x, y��public�ō쐬���A�O���Œl��ݒ肵�āA
//�l���\������邱�Ƃ��m�F���Ă��������B

//struct Vector2
//{
//public:
//	int x;
//	int y;
//};
//
//int main()
//{
//	Vector2 vector2;
//
//	vector2.x = 3;
//	vector2.y = 5;
//
//	printf_s("%d", vector2.x);
//	printf_s("\n%d", vector2.y);
//}



//��Q��
//x, y���W�����\����Vector2���A
//����Ă��������B
//x, y��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
//�l���\������邱�Ƃ��m�F���Ă��������B

//struct Vector2
//{
//private:
//	int x;
//	int y;
//
//public:
//	void setX(int num) { x = num; };
//	void setY(int num) { y = num; };
//
//	int getX() { return x; };
//	int getY() { return y; };
//};
//
//int main()
//{
//	Vector2 vector2;
//	
//	int numF = 0;
//	int numS = 0;
//
//	scanf_s("%d %d", &numF,&numS);
//	
//
//	vector2.setX(numF);
//	vector2.setY(numS);
//	
//	printf_s("%d", vector2.getX());
//	printf_s("\n%d", vector2.getY());
//}



//��R��
//x, y, z���W�����\����Vector3��
//����Ă��������B
//x, y, z��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
//�l���\������邱�Ƃ��m�F���Ă��������B

struct Vector3
{
private:
	int x;
	int y;
	int z;

public:
	void setX(int num) { x = num; };
	void setY(int num) { y = num; };
	void setZ(int num) { z = num; };

	int getX() { return x; };
	int getY() { return y; };
	int getZ() { return z; };
};

int main()
{
	Vector3 vector3;
	
	int numF = 0;
	int numS = 0;
	int numT = 0;

	scanf_s("%d %d %d", &numF, &numS, &numT);
	

	vector3.setX(numF);
	vector3.setY(numS);
	vector3.setZ(numT);
	
	printf_s("\n%d", vector3.getX());
	printf_s("\n%d", vector3.getY());
	printf_s("\n%d", vector3.getZ());
}