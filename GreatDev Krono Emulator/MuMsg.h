#pragma once

#define MSGGET(cat, id) ( (cat) * 256 + (id) )

class CMsg
{

public:

	CMsg();
	virtual ~CMsg();

	void LoadMSG(LPSTR filename);		// ������� ��������� �� Messages.ini � ���������
	LPSTR Get(int idx);					// �������� ���������, ��� � �������� ��������� ������ MSGGET(x, y)

private:

	char szDefaultMsg[50];				// ��������� �� �������� (���� �� ��� ������ �� �������)
	std::map<int, std::string> MsgById;	// ������ ������ = CAT * 256 + ID
	void lMsgFree();					// ������� ��� ��������� (���������� ������)
};