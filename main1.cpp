#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string strToLowerCase(string &str)
{
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] >= 65 && str[i] <= 90)
      str[i] += 32;
  }
  return str;
}
bool findSubstring(string str, string sub)
{
  if (str.rfind(sub) != string::npos)
    return true;
  else
    return false;
}

void readFromFile(ifstream &in){
  if (in.is_open())
  {
    string line;
    while (getline(in, line))
    {
      cout << line << endl;
    }
  }
  else
  {
    cout << "File not open";
  }
}

int main()
{
  ifstream in("D:\\input.txt");
  readFromFile(in);

  in.close();
  ifstream in1("D:\\input.txt");
  string substring;
  int count = 0;

  //это можно убрать
  if (in1.is_open())
  {
    while (getline(in1, substring))
    {
      count++;
    }
  }
  else
  {
    cout << "File not open";
  }
  in1.close();

  ifstream in2;
  in2.open("D:\\input.txt");
  ofstream out2;
  out2.open("D:\\output.txt", ios::app);
  int i = 0;
  if (in2.is_open() && out2.is_open())
  {
    string word;
    cin >> word;
    string line;
    while (getline(in2, line))
    {
      string line_copy;
      i++;
      //и здесь делать проверку на равенство прочитанной строки с  
      if (i == count)
        break;
      line_copy = line;
      strToLowerCase(line);
      if (findSubstring(line, word))
        out2 << line_copy << endl;
    }
  }
  else
  {
    cout << "File not open";
  }
  in2.close();
  out2.close();
}
