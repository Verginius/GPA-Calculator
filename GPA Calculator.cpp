#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	double score[20] = {0},
		   point[20] = {0},
		   truePoint[20] = {0},
		   sum1 = 0,
		   GPA = 0;
	int next = 0,
		i = 0,
		j,
		sum2 = 0;
	cout<<"请输入一门课程的总评和总学分，例如：当你在总学分1的《男刀超神教学》中取得了42分，输入42 1"<<endl;
	do
	{
		cin>>score[i]>>point[i];
		if(score[i]>=90&&score[i]<=100)
			truePoint[i] = 4.0*point[i];
		else if(score[i]>=85&&score[i]<90)
			truePoint[i] = 3.5*point[i];
		else if(score[i]>=80&&score[i]<85)
			truePoint[i] = 3.0*point[i];
		else if(score[i]>=75&&score[i]<80)
			truePoint[i] = 2.5*point[i];
		else if(score[i]>=70&&score[i]<75)
			truePoint[i] = 2.0*point[i];
		else if(score[i]>=65&&score[i]<70)
			truePoint[i] = 1.5*point[i];
		else if(score[i]>=60&&score[i]<65)
			truePoint[i] = 1.0*point[i];
		else
			truePoint[i] = 0;
		i++;
		cout<<"是否要继续输入？\n    1/是 0/否"<<endl;	
		cin>>next;
		if(next == 1)
			cout<<"请继续输入"<<endl;
	}while(next == 1);
	for(j = 0;j<i;j++)
		sum1 = sum1 + truePoint[j];
	for(j = 0;j<i;j++)
		sum2 = sum2 + point[j];
	GPA = sum1/sum2;
	cout<<"你的总学分绩点为"<<sum1<<endl;
	cout<<"你所学课程的总学分为"<<sum2<<endl;
	cout<<"你的平均学分绩点为"<<fixed<<setprecision(2)<<GPA<<endl;
	system("pause");
	return 0;
}
