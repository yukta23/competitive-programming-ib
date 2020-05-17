void Solution::arrange(vector<int> &A) { //rearrange such that arr[i]=arr[arr[i]];
    int n=A.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        temp[i]=A[A[i]];
    }
    for(int i=0;i<n;i++)
    A[i]=temp[i];
}
