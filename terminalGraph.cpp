//Norbert Acedański
#include <iostream>
#include <cstdlib>
using namespace std;
const int timeSpan=31;
int integerDataValue, j;
char timeDifference[]="day", graphValue[]="weight", unit[]="kg";
float i, dataTable[timeSpan + 1], maxValue, minValue;

int main()
{
	cout<<"Data-drawing program in the terminal (mainly used for weight drawing)\n";
	dataTable[1]=87.3;
	dataTable[2]=87.3;
	dataTable[3]=87.4;
	dataTable[4]=87.4;
	dataTable[5]=87.1;
	dataTable[6]=87.2;
	dataTable[7]=87.2;
	dataTable[8]=87;
	dataTable[9]=87;
	dataTable[10]=86.9;
	dataTable[11]=86.9;
	dataTable[12]=86.8;
	dataTable[13]=86.8;
	dataTable[14]=86.7;
	dataTable[15]=86.7;
	dataTable[16]=86.6;
	dataTable[17]=86.6;
	dataTable[18]=86.5;
	dataTable[19]=86.5;
	dataTable[20]=86.4;
	dataTable[21]=86.4;
	dataTable[22]=86.2;
	dataTable[23]=86.1;
	dataTable[24]=86,1;
	dataTable[25]=86;
	dataTable[26]=85.9;
	dataTable[27]=85.9;
	dataTable[28]=85.8;
	dataTable[30]=85.6;
	dataTable[31]=85.5;
	graphValue[0] = toupper(graphValue[0]);
	for(j=1; j<=timeSpan; j++)
		if(dataTable[j]!=0)
		{
			integerDataValue=dataTable[j];
			cout<<graphValue<<" in " <<j<< ". "<<timeDifference<<": " <<dataTable[j];
			if(integerDataValue-dataTable[j]==0)
				cout<<".0"<<unit<<endl;
			else
				cout<<unit<<endl;
			if(dataTable[j]>maxValue)
			{
				maxValue=dataTable[j];
				
			}
			if(dataTable[j]<minValue && dataTable[j]>0)
			{
				minValue=dataTable[j];
			}
		}
	graphValue[0] = tolower(graphValue[0]);
	cout<<"\nHighest "<<graphValue<<": "<<maxValue<<unit<<" in folowing "<<timeDifference<<"(s): ";
	for(j=1; j<=timeSpan; j++)
		if(maxValue==dataTable[j])
			cout<<j<< " ";
	cout<<endl;
	cout<<"Lowest "<<graphValue<<": " <<minValue<<unit<<" in folowing "<<timeDifference<<"(s): ";
	for(j=1; j<=timeSpan; j++)
		if(minValue==dataTable[j])
			cout<<j<< " ";
	cout<<endl;
	for(j=1; j<=timeSpan; j++)
		dataTable[j]*=10;
	graphValue[0] = toupper(graphValue[0]);		
	cout<<endl<<graphValue<<"("<<unit<<")"<<endl;
	cout<<"    ^\n";
	cout<<"    |\n";
	for(i=900; i>=745; i--)
	{
		integerDataValue=i;
		cout<<i/10;
		if(integerDataValue%10==0)
			cout<<".0|";
		else
			cout<<"|";
		for(j=0; j<73; j+=2)
		{
			if(j%2==0)
				integerDataValue=j/2+1;
			if(dataTable[integerDataValue]==i)
				cout<<" *";
			else
				if(j==72)
					cout<<"\n";
				else
					cout<<"  ";
		}
	}
	cout<<"----|-";
	for(j=1; j<=timeSpan; j++)
		cout<<"|-";
	cout<<"-->\n";
	cout<<"   0|";
	for(j=1; j<=9; j++)
		cout<<" " <<j;
	for(j=11; j<=(timeSpan-1)/2*2+1; j+=2)
		cout<<" |" <<j;
	cout<<" Time\n";
	for(j=0; j<21; j++)
		cout<<" ";
	for(j=10; j<=timeSpan/2*2; j+=2)
		cout<<"  " <<j;
	cout<<"  ("<<timeDifference<<"s)\n\n";
	system("pause");
	return 0;
}
