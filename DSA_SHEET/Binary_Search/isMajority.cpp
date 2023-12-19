bool isMajority(vector<int> &nums, int x){
  int first = first(nums, x),last;
  if(first == -1)
      return false;
  last = last(nums,x);
  return (last-first+1 > size(nums)/2);
}

int first(vector<int> &nums, int x){
  int l=0, r= size(nums)-1;
  int m,first=-1;
  while(l<=r){
    m = l + (r-l)/2;
    if(nums[m] == x)
    {
      first=m;
      r=m-1;
    }
    else if(nums[m] < x)
      l=m+1;
    else
      r=m-1;
  }
  return first;
}

int last(vector<int> &nums, int x){
  int l=0, r= size(nums)-1;
  int m,last=-1;
  while(l<=r){
    m = l + (r-l)/2;
    if(nums[m] == x)
    {
      last=m;
      l=m+1;
    }
    else if(nums[m] < x)
      l=m+1;
    else
      r=m-1;
  }
  return last;
}
