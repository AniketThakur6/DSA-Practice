int search(int arr[], int n, int x) {
    // Code here
    if(n<0)
    return -1;
    
    int ans = search(arr+1,n-1,x);
    
    if(arr[0]==x)
     return 0;
     
    if(ans != -1)
    return ans+1;
    
    return -1;
}