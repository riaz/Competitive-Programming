#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int N;
		cin>>N;
		
		int flag=0;
		string direction;
		
		vector <string> road;
		vector <string> reverse;
		
		for(int i=0;i<=N;i++)
		{
			
			getline(cin,direction);
			road.push_back(direction);
		}
		
		for(int i=0;i<road.size()-1;i++)
		{
			
			if(road[i].find("Right")!=string::npos)
			{
				if(road[i+1].find("Left")!=string::npos)
				{
					reverse.push_back(road[i]);
				}
				else
				{
					road[i]="Left"+road[i].substr(5);
					reverse.push_back(road[i]);
				}
			}
			
			else if(road[i].find("Left")!=string::npos)
			{
				if(road[i+1].find("Right")!=string::npos)
				{
					reverse.push_back(road[i]);
				}
				else
				{
					road[i]="Right"+road[i].substr(4);
					reverse.push_back(road[i]);
				}
			}
			else if(road[i].find("Begin")!=string::npos)
			{
				if(road[i+1].find("Right")!=string::npos)
				{
					road[i]="Left"+road[i].substr(5);
					reverse.push_back(road[i]);	
				}
				else
				{
					road[i]="Right"+road[i].substr(5);
					reverse.push_back(road[i]);
				}
			}
		}
		
		if(road[road.size()-1].find("Right")!=string::npos)
			{
				road[road.size()-1]="Begin"+road[road.size()-1].substr(5);
				reverse.push_back(road[road.size()-1]);
			}
		else
		{
			road[road.size()-1]="Begin"+road[road.size()-1].substr(4);
			reverse.push_back(road[road.size()-1]);
		}
		
		for(int i=reverse.size()-1;i>=0;i--)
		{
			cout<<reverse[i]<<endl;
		}
		cout<<endl;
		
	}
} 
