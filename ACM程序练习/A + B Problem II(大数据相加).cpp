#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

char a1[1000];//������
char b1[1000];//����
int a[1000];//������
int b[1000];//����
int c[1000];//��
int lena, lenb, lenc, x;//������λ��������λ�����͵�λ������λ
int j,n;

int main()
{
	cin>>n;
	j=1;
	while(n--){
	memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));	
	cin >> a1; //���뱻����
	cin >> b1;//����
	printf("Case %d:\n",j);
	j++;
	printf("%s + %s = ",a1,b1);
	lena = strlen(a1);//������λ��
	lenb = strlen(b1);//����λ��
	for (int i = 0; i < lena; i++)
		a[lena - i] = a1[i] - '0';//����������������ת�������� 
	for (int i = 0; i < lenb; i++)
		b[lenb - i] = b1[i] - '0';//����������ת�������� 
	lenc = 1;//�͵�λ��
	x=0;
	while (lenc <= lena || lenc <= lenb)//ֱ��λ��С�ļ���
	{
		c[lenc] = a[lenc] + b[lenc] + x;//ÿһλ�ӺͲ��Ҽ�����һ�εĽ�λ
		x = c[lenc] / 10;//���εĽ�λ
		c[lenc] %= 10;//ȡ��λ��
		lenc++;//λ��+1
	}
	c[lenc] = x;
	if (c[lenc] == 0)//������λΪ0
		lenc--;//���ȼ�һ
			for (int i = lenc; i >= 1; i--)//���������
		            cout << c[i];
		            cout<<endl;
					if(n!=0){
		               cout<<endl;
					}
	}
	return 0;
}

