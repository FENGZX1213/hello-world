#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

char a1[101];//������
char b1[101];//����
int a[101];//������
int b[101];//����
int c[1010];//��
int lena, lenb, lenc, x = 0;//������λ��������λ�����͵�λ������λ


int main()
{
	cin >> a1; //���뱻����
	cin >> b1;//����
	lena = strlen(a1);//������λ��
	lenb = strlen(b1);//����λ��
	for (int i = 0; i < lena; i++)
		a[lena - i] = a1[i] - '0';//����������������ת��������
	for (int i = 0; i < lenb; i++)
		b[lenb - i] = b1[i] - '0';//����������ת��������
	lenc = 1;//�͵�λ��
	while (lenc <= lena || lenc <= lenb)//ֱ��λ��С�ļ���
	{
		c[lenc] = a[lenc] + b[lenc] + x;//ÿһλ�ӺͲ��Ҽ�����һ�εĽ�λ
		x = c[lenc] / 10;//���εĽ�λ
		c[lenc] %= 10;//ȡ��λ��
		++lenc;//λ��+1
	}
	c[lenc] = x;
	if (c[lenc] == 0)//������λΪ0
		--lenc;//���ȼ�һ
	for (int i = lenc; i >= 1; i--)//���������
		cout << c[i];
	return 0;
}
