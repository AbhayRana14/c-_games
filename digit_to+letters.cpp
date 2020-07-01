#include<iostream>
using namespace std;

string ones_places[]={" ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve "
                    ,"thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
string tens_places[]={" "," ","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety " };                    

string convertoWords(int n,string s)
{
    string str="";
    if(n>19)
    {
        str+=tens_places[n/10] + ones_places[n%10];
    }
    else
    {
        str+=ones_places[n];
    }

    if(n)
    {
        str += s;
    }
    return str;
}

string convertIt(long n)
{
    string answer;
    answer +=convertoWords((n/10000000),"crore ");
    answer +=convertoWords(((n/100000)%100),"lakh ");
    answer +=convertoWords(((n/1000)%100),"thousand ");
    answer +=convertoWords(((n/100)%10),"hundred ");
    
    if(n>100 && n%100)
    {
        answer +="and ";
    }

    answer += convertoWords((n%100)," ");

    return answer;
}
int main()
{
    long n;
    cout<<"Enter a number you want to convert : ";
    cin>>n;
    cout<<convertIt(n)<<endl;
    return 0;
}
