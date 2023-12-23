int findPos(int arr[], int target)
{
    int s = 0,e = 1;
    while (target > arr[e]) {
        int newStart = e + 1;
        // end = previous end + sizeofbox*2
        e = e + (e - s + 1) * 2;
        s = newStart;
    }
    return first(arr, s, e, 1);
}

int first(int arr[], int l, int r, int target)
{
  int f=-1;
  while(l<=r)
  {
    int m = l + (r-l)/2;
    if(arr[m] == target)
    {
      f = m;
      r = m-1;
    }
    else if(arr[m] < target)
    {
      l = m+1;
    }
    else
    {
      r = m-1;
    }
  }
  return f;
}
