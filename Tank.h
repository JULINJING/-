#pragma once
#include "MyObject.h"
class Tank : public MyObject
{
public:
	Tank() ;
	~Tank() {};

	void Draw(CDC* pDC) ;//����������cpp�ж���˴�����������
	void Move(int nDirection);
	Shell Fire();
	bool IsEnableMove(int nDirection);

public:
	static CImage m_img[4];

};

