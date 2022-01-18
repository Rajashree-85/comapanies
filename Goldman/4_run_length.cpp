string encode(string src)
{     
  //Your code here 
  int c=0;
  string ans;
  for(int i=0;i<src.length();i++)
  {
      
      if(src[i]==src[i+1])
      {
          c++;
      }
      else
      {
         cout<<src[i];
          cout<<c+1;
          c=0;
      }
  }
}
