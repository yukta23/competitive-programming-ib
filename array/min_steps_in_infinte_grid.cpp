int distance(int x1,int y1,int x2,int y2)
{
    int X=abs(x1-x2);
    int Y=abs(y1-y2);
    return max(X,Y);
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0;i<A.size()-1;i++)
    {
        count+=distance(A[i],B[i],A[i+1],B[i+1]);
    }
    return count;
}
