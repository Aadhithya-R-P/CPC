string encode(string src)
{     
  //Your code here
  string ans = "";
  int i=0, count, n=src.length();
  while(i < n-1)
  {
      ans += src[i];
      count = 1;
      while(src[i] == src[i+1])
      {
         i++;
         count++;
      }
      i++;
      ans += to_string(count);
  }
  if(src[n-1] != src[n-2])
  {
      ans += src[n-1];
      ans += '1';
  }
  return ans;
}     