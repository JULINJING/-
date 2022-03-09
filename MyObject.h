#pragma once
class MyObject
{
public:
	MyObject() { m_nSize = 32; };
	~MyObject() {};

	void Draw(CDC* pDC);
	void Move(int nDirection) {};//�����˶�����or����
	bool IsOverlap(MyObject& obj);//�ж����������Ƿ���ײ
	bool IsFriend(MyObject& OBJ);
	void SetSize(int nSize);//�������γߴ�
	void SetDirection(int nDir);
	void SetFriend(bool bFriend);
	void SetArmor(int nArmor);
	void SetSpeed(int nSpeed);
	int GetDirection();//����m_nDirection
	int GetSize();//����m_nSize
	bool GetFriend();
	int GetArmor();
	int GetSpeed();
	template<class T1, class T2>
	bool IsOverLapRect_(T1& a, T2& obj)
	{
		if ((fabs(a.m_ptPos.x - obj.m_ptPos.x) <= 2*a.m_nSize)&& (fabs(a.m_ptPos.y - obj.m_ptPos.y) <= 2 * a.m_nSize))
			return true;
		else 
			return false;
	};


public:
	int m_nSpeed;//<=0 stop
	int m_nArmor;//==0 destroy 0< disable
	CPoint m_ptPos;//��ǰ����
protected:
	bool m_bFriend;
	int m_nSize;//���η�Χ
	int m_nDirection;//1234 �������� ����
};