#ifndef __Aphorism__
#define __Aphorism__

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

#include "Wisdom.h"

//------------------------------------------------------------------------------
// �������������
class Aphorism : public Wisdom
{
public:
	string author, text; //
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);     // ����� ������ � ����������� �����

	// �������� ��� �������������.
	Aphorism() {}
};

class AphorismFactory : public WisdomFactory {
public:
	// ����������� �������, �������������� �������  (����� 1)
	AphorismFactory() :WisdomFactory(1) { }

	// ��������������� ������ Create �� ��������.
	Wisdom* Create(int key) {
		if (key == mark)
			return new Aphorism;
		else
			return nullptr;
	}
};
#endif

