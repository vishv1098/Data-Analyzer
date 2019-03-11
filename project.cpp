#include "iostream"
#include "matplotlibcpp.h"
#include "TextTable.h"
#include <string.h>
#include "iomanip"
using namespace std;
namespace plt = matplotlibcpp;
class College
{
    protected:int n;
              vector<double>sub1;
              vector<double>sub2;
              vector<double>sub3;
              vector<double>percent;
              string colName;
              double average;
              double highest;
              vector<double>freq;
    public:void FreqCount(vector<double> &sub);
};
class Sem : public College
{
    public:void read(int sem,int br);
           friend void graph(Sem ob[],int no);
           friend void graph(Sem ob[],int no,int ch);
           string stream(int x,int z,int p);
};
string Sem::stream(int x,int z,int p)
{
 switch(z)
 {
  case 1:switch(x)
        {
            case 1:if(p == 1)
                   {
                        return "Physics";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 1";
                   }
                   else
                   {
                        return "Civil";
                   }
            case 2:if(p == 1)
                   {
                        return "Chemistry";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 2";
                   }
                   else
                   {
                        return "CAD";;
                   }
            case 3:if(p == 1)
                   {
                        return "DS";
                   }
                   else if(p == 2)
                   {
                        return "ADE";
                   }
                   else
                   {
                        return "USP";
                   }
            case 4:if(p == 1)
                   {
                        return "OOPS";
                   }
                   else if(p == 2)
                   {
                        return "MP";
                   }
                   else
                   {
                        return "CO";
                   }
           case 5:if(p == 1)
                  {
                        return "ADA";
                  }
                  else if(p == 2)
                  {
                        return "OS";
                  }
                  else
                  {
                        return "DBMS";
                  }
          case 6:if(p == 1)
                 {   
                        return "JAVA";
                 }
                 else if(p == 2)
                 {
                        return "CNET";
                 }
                 else
                 {
                        return "FACD";;
                 }
         case 7:if(p == 1)
                {
                        return "WebTech";
                }
                else if(p == 2)
                {
                        return "STest";
                }
                else
                {
                        return "MobDev";
                }
        case 8:if(p == 1)
               {
                        return "OOAD";
               }
               else if(p == 2)
               {
                        return "DMML";
               }
               else
               {
                        return "Project";
               }
     }
     case 2:switch(x)
        {
            case 1:if(p == 1)
                   {
                        return "Physics";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 1";
                   }
                   else
                   {
                        return "Civil";
                   }
            case 2:if(p == 1)
                   {
                        return "Chemistry";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 2";
                   }
                   else
                   {
                        return "CAD";;
                   }
            case 3:if(p == 1)
                   {
                        return "DE";
                   }
                   else if(p == 2)
                   {
                        return "AE";
                   }
                   else
                   {
                        return "NA";
                   }
            case 4:if(p == 1)
                   {
                        return "HDL";
                   }
                   else if(p == 2)
                   {
                        return "DSP";
                   }
                   else
                   {
                        return "CS";
                   }
           case 5:if(p == 1)
                  {
                        return "AC";
                  }
                  else if(p == 2)
                  {
                        return "MC";
                  }
                  else
                  {
                        return "VLSI";
                  }
          case 6:if(p == 1)
                 {   
                        return "DC";
                 }
                 else if(p == 2)
                 {
                        return "ES";
                 }
                 else
                 {
                        return "MR";;
                 }
         case 7:if(p == 1)
                {
                        return "WMC";
                }
                else if(p == 2)
                {
                        return "AWP";
                }
                else
                {
                        return "PE";
                }
        case 8:if(p == 1)
               {
                        return "OE";
               }
               else if(p == 2)
               {
                        return "PP-1";
               }
               else
               {
                        return "Project";
               }
     }
     case 3:switch(x)
        {
            case 1:if(p == 1)
                   {
                        return "Physics";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 1";
                   }
                   else
                   {
                        return "Civil";
                   }
            case 2:if(p == 1)
                   {
                        return "Chemistry";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 2";
                   }
                   else
                   {
                        return "CAD";;
                   }
            case 3:if(p == 1)
                   {
                        return "DS";
                   }
                   else if(p == 2)
                   {
                        return "ADE";
                   }
                   else
                   {
                        return "USP";
                   }
            case 4:if(p == 1)
                   {
                        return "OOPS";
                   }
                   else if(p == 2)
                   {
                        return "MP";
                   }
                   else
                   {
                        return "CO";
                   }
           case 5:if(p == 1)
                  {
                        return "ADA";
                  }
                  else if(p == 2)
                  {
                        return "OS";
                  }
                  else
                  {
                        return "DBMS";
                  }
          case 6:if(p == 1)
                 {   
                        return "JAVA";
                 }
                 else if(p == 2)
                 {
                        return "CNET";
                 }
                 else
                 {
                        return "FLAT";;
                 }
         case 7:if(p == 1)
                {
                        return "ML";
                }
                else if(p == 2)
                {
                        return "STest";
                }
                else
                {
                        return "PE";
                }
        case 8:if(p == 1)
               {
                        return "PE";
               }
               else if(p == 2)
               {
                        return "INTERN";
               }
               else
               {
                        return "Project";
               }
     }
     case 4:switch(x)
        {
            case 1:if(p == 1)
                   {
                        return "Physics";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 1";
                   }
                   else
                   {
                        return "Civil";
                   }
            case 2:if(p == 1)
                   {
                        return "Chemistry";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 2";
                   }
                   else
                   {
                        return "CAD";;
                   }
            case 3:if(p == 1)
                   {
                        return "BMS";
                   }
                   else if(p == 2)
                   {
                        return "SM";
                   }
                   else
                   {
                        return "PS";
                   }
            case 4:if(p == 1)
                   {
                        return "ESE";
                   }
                   else if(p == 2)
                   {
                        return "ADS";
                   }
                   else
                   {
                        return "HPS";
                   }
           case 5:if(p == 1)
                  {
                        return "CT";
                  }
                  else if(p == 2)
                  {
                        return "DRC";
                  }
                  else
                  {
                        return "HE";
                  }
          case 6:if(p == 1)
                 {   
                        return "EE";
                 }
                 else if(p == 2)
                 {
                        return "DDRC";
                 }
                 else
                 {
                        return "AGE";;
                 }
         case 7:if(p == 1)
                {
                        return "DDSS";
                }
                else if(p == 2)
                {
                        return "EV";
                }
                else
                {
                        return "PE";
                }
        case 8:if(p == 1)
               {
                        return "PD";
               }
               else if(p == 2)
               {
                        return "RSS";
               }
               else
               {
                        return "GWH";
               }
     }
     case 5:switch(x)
        {
            case 1:if(p == 1)
                   {
                        return "Physics";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 1";
                   }
                   else
                   {
                        return "Civil";
                   }
            case 2:if(p == 1)
                   {
                        return "Chemistry";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 2";
                   }
                   else
                   {
                        return "CAD";;
                   }
            case 3:if(p == 1)
                   {
                        return "CAMD";
                   }
                   else if(p == 2)
                   {
                        return "CFT";
                   }
                   else
                   {
                        return "MM";
                   }
            case 4:if(p == 1)
                   {
                        return "BT";
                   }
                   else if(p == 2)
                   {
                        return "MMT";
                   }
                   else
                   {
                        return "MMM";
                   }
           case 5:if(p == 1)
                  {
                        return "HPC";
                  }
                  else if(p == 2)
                  {
                        return "RD";
                  }
                  else
                  {
                        return "MM";
                  }
          case 6:if(p == 1)
                 {   
                        return "FEM";
                 }
                 else if(p == 2)
                 {
                        return "DME";
                 }
                 else
                 {
                        return "AE";;
                 }
         case 7:if(p == 1)
                {
                        return "MV";
                }
                else if(p == 2)
                {
                        return "CE";
                }
                else
                {
                        return "PE";
                }
        case 8:if(p == 1)
               {
                        return "PE";
               }
               else if(p == 2)
               {
                        return "OE";
               }
               else
               {
                        return "Project";
               }
         }      
        case 6:switch(x)
        {
            case 1:if(p == 1)
                   {
                        return "Physics";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 1";
                   }
                   else
                   {
                        return "Civil";
                   }
            case 2:if(p == 1)
                   {
                        return "Chemistry";
                   }
                   else if(p == 2)
                   {
                        return "MATHS 2";
                   }
                   else
                   {
                        return "CAD";;
                   }
            case 3:if(p == 1)
                   {
                        return "MS";
                   }
                   else if(p == 2)
                   {
                        return "EDC";
                   }
                   else
                   {
                        return "DE";
                   }
            case 4:if(p == 1)
                   {
                        return "EFT";
                   }
                   else if(p == 2)
                   {
                        return "MM";
                   }
                   else
                   {
                        return "EM";
                   }
           case 5:if(p == 1)
                  {
                        return "DSP";
                  }
                  else if(p == 2)
                  {
                        return "LCS";
                  }
                  else
                  {
                        return "GTD";
                  }
          case 6:if(p == 1)
                 {   
                        return "PSA";
                 }
                 else if(p == 2)
                 {
                        return "PE";
                 }
                 else
                 {
                        return "RHE";;
                 }
         case 7:if(p == 1)
                {
                        return "CAPA";
                }
                else if(p == 2)
                {
                        return "AIBA";
                }
                else
                {
                        return "PE";
                }
        case 8:if(p == 1)
               {
                        return "PE";
               }
               else if(p == 2)
               {
                        return "GE";
               }
               else
               {
                        return "Project";
               }
       }
     }
 }                     
void Sem::read(int sem,int br)
{
    double *read=new double;
    double sum=0;
    cout<<"Enter abbreviated college name:";
    cin>>colName;
    cout<<"Enter the number of students:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks of student "<<i+1<<" for "<<stream(sem,br,1)<<":";
        cin>>read[0];
        sub1.push_back(read[0]); 
        cout<<"Enter marks of student "<<i+1<<" for "<<stream(sem,br,2)<<":";
        cin>>read[0];
        sub2.push_back(read[0]);
        cout<<"Enter marks of student "<<i+1<<" for "<<stream(sem,br,3)<<":";
        cin>>read[0];
        sub3.push_back(read[0]);
        cout<<endl;
        percent.push_back(((sub1.at(i)+sub2.at(i)+sub3.at(i))/300)*100);
        if(highest < percent.at(i))
        {
            highest = percent.at(i);
        } 
        sum=sum+percent.at(i);
    }
    average=sum/n;
    delete read;
}	
void graph(Sem ob[],int no,int ch)
{ 
    switch(ch)
    {
        case 1:for(int i=0;i<no;i++)
               {
	                ob[i].FreqCount(ob[i].percent);   
                    plt::named_plot(ob[i].colName,ob[i].percent,ob[i].freq);
	           }
	           plt::title("Frequency V/S Percent");
 	           break;
        case 2:for(int i=0;i<no;i++)
               { 
 	                ob[i].FreqCount(ob[i].sub1);  
                    plt::named_plot(ob[i].colName,ob[i].sub2,ob[i].freq);
	           }
	           plt::title("Frequency V/S SUB1");         
 	           break;
        case 3:for(int i=0;i<no;i++)
               {     
	             ob[i].FreqCount(ob[i].sub2);	
                 plt::named_plot(ob[i].colName,ob[i].sub1,ob[i].freq);
               }
	           plt::title("Frequency V/S SUB2");
 	           break;
       case 4:for(int i=0;i<no;i++)
              {   
	            ob[i].FreqCount(ob[i].sub3);
                plt::named_plot(ob[i].colName,ob[i].sub3,ob[i].freq);
              }
	          plt::title("Frequency V/S SUB3");
  	          break;
               
    }
    plt::legend();
    plt::show();
}
void College::FreqCount(vector<double> &sub)
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
void graph(Sem ob[],int no)
{
    TextTable t('-','|',' ');
    t.add("College");
    t.add("Average %");
    t.add("Highest %");
    t.endOfRow();
    for(int i=0;i<no;i++)
    {
        t.add(ob[i].colName);
        t.add(to_string(ob[i].average));
        t.add(to_string(ob[i].highest));
        t.endOfRow();
    }
    t.setAlignment( 2, TextTable::Alignment::RIGHT );
    cout<<t;
} 
int main()
{
    int no,ch,ch1,ch2,sem;
    cout<<"Enter the number of colleges";
    cin>>no;
    cout<<"Choose a branch"<<endl<<"1.CSE"<<endl<<"2.ECE"<<endl<<"3.IS"<<endl<<"4.CIVIL"<<endl<<"5.MECH"<<endl<<"6.EEE"<<endl;
    cin>>ch2;
    cout<<"Enter the semester";
    cin>>sem;
    Sem student[no];
    for(int i=0;i<no;i++)
    {
        student[i].read(sem,ch2);
    }
    cout<<"Operations"<<endl<<"1.Frequency V/S Percent"<<endl<<"2.Frequency V/S Subject"<<endl;
    cin>>ch;
    graph(student,no);
    switch(ch)
    {
        case 1:graph(student,no,ch);
 	           break;
        case 2:cout<<"1.SUB1"<<endl<<"2.SUB2"<<endl<<"3.SUB3";
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
 
