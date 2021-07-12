#include<iostream>
#include<algorithm>
#define max 20
using namespace std;

struct Activity{
    int startTime,endTime;
};

bool activityComparator(Activity a1, Activity a2)
{
    return (a1.endTime < a2.endTime);
}

int activitySelector(Activity activities[],int n)
{
    sort(activities,activities+n,activityComparator);
    int activityCount=0;
    
    // select first activity
    Activity currActivity = activities[0];
    activityCount+=1;

    for (int i = 1; i < n; i++)
    {
        if(activities[i].startTime>=currActivity.endTime){
            activityCount++;
            currActivity=activities[i];
        }
       
    }
    
    return activityCount;
}

int main()
{
    Activity activities[max];
    int n;
    cout<<"Enter number of activites:"<<endl;
    cin>>n;
    if(n>max){
        cout<<"Please keep size below or equal to "<<max<<endl;
    }
    cout<<"Please enter start time and end time for activites: "<<endl;
    for (int i = 0; i < n; i++)
    cin>>activities[i].startTime>>activities[i].endTime; // reading space separated input from console into two diff variables
    
    cout<<"Number of Activities that the person can do: "<<activitySelector(activities,n);

    return 0;
}