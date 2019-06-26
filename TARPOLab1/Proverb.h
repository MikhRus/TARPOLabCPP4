#ifndef __Proverb__
#define __Proverb__

//------------------------------------------------------------------------------
// Rectangle.h - �������� �������� ������ ��������������,
// ������������ �� �������� ������ Figure
//------------------------------------------------------------------------------

#include "Wisdom.h"

//------------------------------------------------------------------------------
// �������������
class Proverb : public Wisdom
{
public:
	string country, text; // ������, ������
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);     // ����� ������ � ����������� �����

	// �������� ��� �������������.
	Proverb() {}
};

class ProverbFactory : public WisdomFactory {
public:
	// ����������� �������, �������������� ������� �������������� (����� 1)
	ProverbFactory() :WisdomFactory(2) { }

	// ��������������� ������ Create �� �������� ���������������.
	Wisdom* Create(int key) {
		if (key == mark)
			return new Proverb;
		else
			return nullptr;
	}
};

#endif
