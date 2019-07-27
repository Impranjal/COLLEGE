##include  <bits/stdc++.h>
##include <pthread.h>
#include <ctime>
using namespace std;
string s;
time_t Time=time(0);
s=ctime(&Time);
votes[100];
int  voter[100];
int votes[100];
char party[5]={'BJP','AAP','CONGRESS','SP','BSP'};
int main()
{
	int ch,loc,party;
	char c;
  int both;
	cout<<"Welcome to election protal"<<endl;
  cout<<"***************************"<<endl;
	cout<<"Enter no. of locality"<<endl;
	cin>>loc;
  cout<<"1. FOR VOTERS"<<endl;
  cout<<"2. ELECTION OFFICER"<<endl;
  cin>>n;
  switch (n) {
    case 1:
          cout<<"Enter the no. of both"<<endl;
          cin>>both;
          /*enter the refernce number of the locality*/
          pthread_t voter[100];
          for(int i=0;i<100;i++)
          {
            cout<<"Voter checked in is  T["<<i<<"]at"<< s <<endl;
						cout<<"Now cast your vote"<<endl;
						cout<<party[i]<<endl;
						//show now parties to vote for

            pthread_create(&voter[i],NULL,&voting,NULL);
            pthread_join(voter[i],NULL);
          }
		case 2:
		     cout<<"Enter your name"<<endl;
				 cin>>c;
				 cout<<"Welcome "<<c<<endl;
				 int k;
				 cout<<"1.Counting votes"<<endl;
				 cout<<"2.Percentage voting"<<endl;
				 cin>>k;
				 switch (k) {
				 	case 1:for(int j=0;j<n;j++)
 				         {
 					         pthread_create(&votes[j],NULL,&counting,NULL);
 					         pthread_join(votes[i],NULL);

 				 }
				 case 2:
				        for{int i=0;i<100;i++}
								{
									cout<<"At"<<s<<"voting percentage is"

								}
								//dynamic updation after every vote

				 }

}
}
void* voting(void *arq)
  {
    //code for voting process

      for(int i=0;i<100;i++)
			{
				cout<<"Enter your choices"<<endl;
				cout<<party[i]<<endl;
				cin>>votes[i]<<endl;
				//index corresponding to votes 1=BJP,2=AAP etc


			}


  }
//void* counting(void *arg)
