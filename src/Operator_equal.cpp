//CMyString声明如下，实现赋值运算函数
#include "string.h"
#include "Prefix_Test.h"
class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString &str);
	virtual ~CMyString(void);

	CMyString& operator=(const CMyString &str);
private:
	char* m_pData;
};

/*CMyString& CMyString::operator=(const CMyString &str)
{
	if (this == &str)
	{
		return *this;
	}
	delete[] m_pData;
	m_pData = nullptr;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy_s(m_pData, strlen(str.m_pData),str.m_pData);

	return *this;
}*/

CMyString& CMyString::operator=(const CMyString &str)
{
	if (this != &str)
	{
		CMyString strTemp(str);
		char* pTemp = strTemp.m_pData;
		strTemp.m_pData = m_pData;
		m_pData = pTemp;
	}
	return *this;
}

CMyString::CMyString(char* pData)
{
	if (pData)
	{
		m_pData = pData;
	}
}

CMyString::CMyString(const CMyString &str)
{
	if (this != &str)
	{
		m_pData = str.m_pData;
	}
}

CMyString::~CMyString(void)
{

}

#ifndef DEBUG
int main()
{
	char m_pdata[9] = "Testcode";
	CMyString m_String(m_pdata);
	CMyString m_String2 = m_String;
	return 0;
}
#endif