#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a[256],b[256],c[256];
    int lena,lenb,lenc,i;
    char n[256],n1[256],n2[256];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    printf("input minuend:"); gets(n1);//���뱻����
    printf("Input subtrahend:"); gets(n2);//�������
    lena=strlen(n1); lenb=strlen(n2);
    if(lena < lenb || (lena==lenb && strcmp(n1,n2)<0))
                 //strcmp()Ϊ�ַ����ȽϺ�������n1==n2 ����0
                 //n1>n2,���������� n1<n2 ���ظ���
    {
        strcpy(n,n1);//���������ͼ����������������ͼ���
        strcpy(n1,n2);//��n1�����ֵ��ȫ��ֵ��n����
        strcpy(n2,n);//�����˱������ͼ��������Ϊ����
        cout<<"-";
    }
    for(i = 0; i <= lena-1; i++)
        a[lena-i]=int(n1[i]-'0');//����������a����
    for(i = 0; i <= lenb-1; i++)
        b[lenb-i]=int(n2[i]-'0');//��������b����
    i=1;
    while(i <= lena || i<=lenb){
        if(a[i]<b[i]){
            a[i]+=10;
            a[i+1]--;  //�����������λ��1��10
        }
        c[i]=a[i]-b[i];//��Ӧλ���
        i++;
    }
    lenc=i;
    while((c[lenc] == 0)&&(lenc>1))  lenc--; //���λ��0�����
    for(i = lenc; i >= 1; i--) cout<<c[i]; //������
    cout<<endl;
    return 0;
}
