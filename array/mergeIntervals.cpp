/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=intervals[intervals.size()-1].end;
    vector<int> temp(n+10,-1) ;
    for(int i=0;i<intervals.size();i++)
    {
        for(int j=intervals[i].start;j<=intervals[i].end;j++)
        temp[j]=i;
    }
    int first=newInterval.start;
    int second=newInterval.end;
    int begin=-1;
    int finish=-1;
    for(int i=first;i<=second;i++)
    {
        begin=min(begin,temp[i]);
        finish=max(finish,temp[i]);
    }
    if(begin==-1 && finish==-1)
    {
        Interval i;
        i.start=first;
        i.end=second;
        int insertIndex=-1;
        for(int i=0;i<=first;i++)
        insertIndex=max(insertIndex,temp[i]);
        
        insertIndex++;
        intervals.insert(intervals.begin()+insertIndex,i);
    }
    else
    {
        int last=intervals[finish].end;
        int commence=intervals[begin].start;
        for(int i=begin+1;i<=finish;i++)
        {
            intervals.erase(intervals.begin()+i);
        }
        
        intervals[begin].start=min(commence,first);
        intervals[begin].end=max(second,last);
    }
    return intervals;
}
