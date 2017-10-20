#include <iostream>
using namespace std;
class personal
{
    string name;
    string city;
    int age ;
    public:
        void in()
        {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the city: ";
        cin>>city;
        cout<<"Enter the age: ";
        cin>>age;
        }
        void out(int r)
        {
        cout<<"Roll no: "<<r<<"\n";
        cout<<"Name: "<<name<<"\n";
        cout<<"Enter the city: "<<city<<"\n";
        cout<<"Enter the age: "<<age<<"\n";
        }
};
class marks
{
    protected:
        int sub[5];
    public:
        marks()  //contructor
        {   int i;
            for(i=0;i<5;i++)
            {
                sub[i]=0;
            }
        }
        void getMarks()
        {
           int i;
           for(i=0;i<5;i++)
           {
               cout<<"Enter the marks of subject "<<i+1<<" :\n";
               cin>>sub[i];
               if(sub[i]<0 && sub[i]>100)
               {
                   cout<<"Enter valid marks";
                   cin>>sub[i];
               }

           }

        }
};
class result:public marks   //inheritance
{
    protected:
        float avg;
    public:
       void operator !()     //operator overloading
       {   int i;
           int sum=0;
           for(i=0;i<5;i++)
           {
               sum+=sub[i];
           }
           avg=sum/5;
           cout<<"Result in Percentage: "<<avg<<"%\n";
       }
};
class academic:public result   //inheritance
{
    public:
        void garde()
        {
            if(avg>=91 && avg<=100)
           {
               cout<<"Result 2017: O Grade (Excellent Academic Performance)\n";
           }
           else if(avg>=81 && avg<=90)
           {
               cout<<"Result 2017: A Grade (Very Good Academic Performance)\n";
           }
           else if(avg>=71 && avg<=80)
           {
               cout<<"Result 2017: B Grade (Good Academic Performance)\n";
           }
           else if(avg>=61 && avg<=70)
           {
               cout<<"Result 2017: C Grade (Can Improve in Academic Performance)\n";
           }
           else if(avg>=61 && avg<=70)
           {
               cout<<"Result 2017: D Grade (Can Improve in Academic Performance)\n";
           }
           else if(avg>=51 && avg<=60)
           {
               cout<<"Result 2017: E Grade (Bad Academic Performance)\n";
           }
           else
           {
               cout<<"Result 2017: F Grade (Fail)\n";
           }
        }

};
class special
{
    char x;
    public:
        void in()
        {

            cout<<"Deserves Special Appreciation?(Type 'y' for yes and 'n' for no):\n";
            cin>>x;
            if(x!='y' && x!='n' && x!='Y' && x!='N')
            {
                cout<<"Enter valid option\n";
                cin>>x;
            }

        }
        void out()
        {
             if(x=='y' || x=='Y')
            {
                cout<<"Special Remark:Specially Appreciated for the overall Performace over the year!";
            }
        }

};
int main()
{
    int roll,n,i;
    cout<<"Enter the no of Students: ";
    cin>>n;
    cout<<"\n";
    for(i=0;i<n;i++)
    {
    cout<<"Enter the roll no of the Students: ";
    cin>>roll;
    cout<<"\n";
    personal p;
    p.in();
    academic r;
    r.getMarks();
    special s;
    s.in();
    cout<<"\n\n";
    cout<<"Student Report 2017"<<"\n";
    p.out(roll);
    !r;
    r.garde();
    s.out();
    }
    return 0;
}
