#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
	string A = "Ardi Sasongko";
	int nim,bind,bing,agm,fsk,bio,kim,mtk,bind1,bing1,agm1,fsk1,bio1,kim1,mtk1;
	nim=123200103;
	bind=87;
	bing=85;
	agm=89;
	fsk=80;
	bio=81;
	kim=79;
	mtk=88;
	bind1=88;
	bing1=83;
	agm1=89;
	fsk1=84;
	bio1=87;
	kim1=79;
	mtk1=84;
	
	float uas,uts;
	cout<< "Nama :"<< A <<endl;
	cout<< "NIM  :"<<nim<<endl;
	
	cout<< "-----------------------------------------"<<endl;
	
	cout<< "Nilai Bahasa Indonesia :"<<bind<<endl;
	cout<< "Nilai Bahasa Inggris   :"<<bing<<endl;
	cout<< "Nilai Agama            :"<<agm<<endl;
	cout<< "Nilai Fisika           :"<<fsk<<endl;
	cout<< "Nilai Biologi          :"<<bio<<endl;
	cout<< "Nilai Kimia            :"<<kim<<endl;
	cout<< "Nilai Matematika       :"<<mtk<<endl;
	
	uas=(bind+bing+agm+fsk+bio+kim+mtk)/7;
	
	cout<< "Rata-rata nilai UAS dari "<< A << " adalah "<<uas;
	cout<<endl;
	
	cout<< "-----------------------------------------"<<endl;

	
	cout<< "Nilai Bahasa Indonesia :"<<bind1<<endl;
	cout<< "Nilai Bahasa Inggris   :"<<bing1<<endl;
	cout<< "Nilai Agama            :"<<agm1<<endl;
	cout<< "Nilai Fisika           :"<<fsk1<<endl;
	cout<< "Nilai Biologi          :"<<bio1<<endl;
	cout<< "Nilai Kimia            :"<<kim1<<endl;
	cout<< "Nilai Matematika       :"<<mtk1<<endl;
	
	uts=(bind1+bing1+agm1+fsk1+bio1+kim1+mtk1)/7;
	
	cout<< "Rata-rata nilai UTS dari "<< A << " adalah "<<uts<<endl;
	
	cout<< "-----------------------------------------"<<endl;

	return 0;
	

}
