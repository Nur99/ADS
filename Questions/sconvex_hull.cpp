Convex hull

  merge(vector <int> a, vector <int> b){
    /*  
      finding left_most of a and right_most of b,
      we will move up until it is possible. Now we have upper tangent!
      
      finding left_most of a and right_most of b.
      we will move down until it is possible. Now we have lowe tangent!
    */
    return merged;  
  }
  brute_force(vector <int> a){
    ????????????????????????
  }
  convex(vector <int> a){
    if(a.size() <= 5)return brute_force(a);
    sort(a.begin(), a.end()); //by x coordinate
    
    int mid = a.size()/2;    
    vector <int> left, right;
    for(int i = 0; i < mid; i++)left.pb(a[i]);
    for(int i = mid; i < a.size(); i++)right.pb(a[i]);
    
    return merge(convex(left), convex(right));
  }
