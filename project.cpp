#include "iostream"
#include "matplotlibcpp.h"
#include "TextTable.h"
#include <string.h>
using namespace std;
namespace plt = matplotlibcpp;
class college
{
 int n;
 vector<double>usp;
 vector<double>ds;
 vector<double>ade;
 vector<double>percent;
 string col_name;
 double average;
 double highest=0;
 vector<double>freq;
 public:college();
	friend void display(college ob[],int no);
 	friend void graph(college ob[],int no,int ch);    
        void freq_count(vector<double> &freq);
};
college::college()
{
 double a,d,u,sum=0;
 cout<<"Enter abbreviated college name:";
 cin>>col_name;
 cout<<"Enter the number of students:";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter marks of student "<<i+1<<" DS:";
  cin>>d;
  cout<<"Enter marks of student "<<i+1<<" ADE:";
  cin>>a;
  cout<<"Enter marks of student "<<i+1<<" USP:";
  cin>>u;
  cout<<endl;
  ade.push_back(a);
  ds.push_back(d);
  usp.push_back(u);
  percent.push_back(((a+d+u)/300)*100);
  if(highest < percent.at(i))
  {
   highest = percent.at(i);
  }
  sum=sum+percent.at(i);
 }
 average=sum/n;
}	
void graph(college ob[],int no,int ch)
{
 switch(ch)
 {
  case 1:for(int i=0;i<no;i++)
         {
	  ob[i].freq_count(ob[i].percent);   
          plt::named_plot(ob[i].col_name,ob[i].percent,ob[i].freq);
	 }
	 plt::title("Frequency V/S Percent");
 	 break;
  case 2:for(int i=0;i<no;i++)
         { 
 	  ob[i].freq_count(ob[i].ade);  
          plt::named_plot(ob[i].col_name,ob[i].ade,ob[i].freq);
	 }
	 plt::title("Frequency V/S ADE");         
 	 break;
  case 3: for(int i=0;i<no;i++)
         {   
	  ob[i].freq_count(ob[i].ds);	
          plt::named_plot(ob[i].col_name,ob[i].ds,ob[i].freq);
         }
	 plt::title("Frequency V/S DS");
 	 break;
  case 4:for(int i=0;i<no;i++)
         {   
	  ob[i].freq_count(ob[i].usp);
          plt::named_plot(ob[i].col_name,ob[i].usp,ob[i].freq);
         }
	 plt::title("Frequency V/S USP");
  	 break;
 }

  plt::legend();
  plt::show();
}
void college::freq_count(vector<double> &sub)
{
  int cnt=0; 
  for(int i=0;i<n;i++)
          {
           for(int j=0;j<n;j++)
  	   {
            if(sub.at(i)==sub.at(j))
   	    {
    	     cnt++;
   	    }
  	   }
  	 freq.push_back(cnt);
  	 cnt=0;
       }
}
void display(college ob[],int no)
{
 TextTable t('-','|',' ');
 t.add("College");
 t.add("Average %");
 t.add("Highest %");
 t.endOfRow();
 for(int i=0;i<no;i++)
 {
  t.add(ob[i].col_name);
  t.add(to_string(ob[i].average));
  t.add(to_string(ob[i].highest));
  t.endOfRow();
 }
 t.setAlignment( 2, TextTable::Alignment::RIGHT );
 cout<<t;
} 
int main()
{
 int no,ch,ch1;
 cout<<"Enter the number of colleges";
 cin>>no;
 college student[no];
 cout<<"Operations"<<endl<<"1.Frequency V/S Percent"<<endl<<"2.Frequency V/S Subject"<<endl;
 cin>>ch;
 display(student,no);
 switch(ch)
 {
  case 1:graph(student,no,ch);
 	 break;
  case 2:cout<<"1.Ade"<<endl<<"2.DS"<<endl<<"3.USP";
	 cin>>ch1;
	 switch(ch1)
 	 {
           case 1:graph(student,no,ch1+1);
	          break;	
	   case 2:graph(student,no,ch1+1);
	          break;
	   case 3:graph(student,no,ch1+1);
	          break;
	 }
  }		  
} 
 
