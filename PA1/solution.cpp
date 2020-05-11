#include<iostream>
#include<string>
using namespace std;
#define MAX 1000
//13:32:40  08/03/2020 sunday
//PA1 C++ YILMAZ_AR ANKARA_UNIVERSITY

string kucult(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')   
			str[i] = str[i] + 32;       
	}
	return str;
}


int main(){
	
	string array1[MAX];
	string temp,s;
	int count=0;
	
	//HEM KUCULT HEM AL
	//Take words and convert upper case to lower case
	while(cin>>s){
		
		array1[count]=kucult(s);
		count++;
	
	}
	
	//SIRAYA DIZ
	//in ascending order
	 for(int i = 0; i < (count-1); ++i){
	
	       for( int j = i+1; j < count; ++j)
	       {
	          if(array1[i] > array1[j])
	          {
	            temp = array1[i];
	            array1[i] = array1[j];
	            array1[j] = temp;
	          }
	    }
	 }
	
	int sayi=0;

	//KAC TANE OLDUGUNU BUL
	//Find the occurrences of each word in the vocabulary
	for(int b=0;b<count;){
		sayi++;
		for(int c=b+1;c<count;++c){
			if(array1[b]==array1[c])
			{	b=c; 		}
		}	
		b++;
	}

cout<<"Vocabulary Size = "<<sayi<<endl;

for(int b=0;b<count;){
		int word=1;
		cout<<array1[b];
		for(int c=b+1;c<count;++c){
			if(array1[b]==array1[c])
			{	
				word++;
				b=c;
			}
		
		}
		b++;
		cout<<" "<<word<<endl;
	
	}

}
