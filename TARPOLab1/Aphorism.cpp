#include "Aphorism.h"

//------------------------------------------------------------------------------
// ���� ���������� ��������������
void Aphorism::InData(ifstream& ifst) {
	ifst >> author >> text;
}

//------------------------------------------------------------------------------
// ����� ���������� ��������������
void Aphorism::Out(ofstream& ofst) {
	ofst << "Aphorism. Author: " << author << "; " << text << endl;
}

namespace {
	AphorismFactory af;
}

