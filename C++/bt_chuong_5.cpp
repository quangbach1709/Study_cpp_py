#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void xoa_dau(string &str)
{
  while (str[0]==' ')
  {
    str.erase(0,1);
  }
  
}

void xoa_cuoi(string &str)
{
  
  while (str[str.size()-1]==' ')
  {
    str.erase(str.size()-1,1);

  }
  
}

void xoa_giua(string &str)
{
  int i=0;
  while (i<str.size()-1)
  {
    if (str[i]==' ' && str[i+1]==' ')
    {
      str.erase(i,1);
      i--;
    }
    i++;
  }
  
}

void chuyen_hoa(string &str)
{
  for (int i = 0; i < str.size(); i++)
  {
    str[i]=tolower(str[i]);
  }
  
  str[0]=toupper(str[0]);
  int i=0;
  while (i<str.size())
  {
    
    if (str[i]==' '&&str[i+1]!=' ')
    {
      str[i+1]=toupper(str[i+1]);
    }
    i++;
  }
  
}

int main()
{
  string str;
  cout<<"Nhap choi: ";
  getline(cin,str);
  
  xoa_dau(str);
  xoa_cuoi(str);
  xoa_giua(str);
  chuyen_hoa(str);

  cout<<"Chuoi sau su ly: "<<str<<endl;
  return 0;
}