#include <bits/stdc++.h>
using namespace std;


int inverse(int N)
{
	int r1=26,r2=N;
	int t1=0,t2=1;
	while(r2>0)
	{
		int q=r1/r2;
		int r=r1-q*r2;
		r1=r2;
		r2=r;
		int t=t1-q*t2;
		t1=t2;
		t2=t;
	}
	return t1;
}
int main()
{
	int T;
	cin>>T;
	int K=3;
	int inv=inverse(K);

	while(T--)
	{
		string input,output;
		cout<<"Message: ";
		cin>>input;
		
		///ENCRYPTION
		cout<<"Encrypted Data: ";
		for(int i=0;i<input.size();i++)
			output+=((input[i]-'a')*K)%26+'a';
		cout<<output<<endl;

		///DECRYPTION
		cout<<"Descrypted Data: ";
		input.clear();
		for(int i=0;i<output.size();i++)
			input+=((output[i]-'a')*inv)%26+'a';
		cout<<input<<endl;
	}
}