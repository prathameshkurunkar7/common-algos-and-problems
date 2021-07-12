#include<iostream>
#include<algorithm>
# define max_size 20
using namespace std;

struct Job{
    int deadline,profit;    // can keep job id if wanting to display the job sequence
};


bool jobComparator(Job j1, Job j2)
{
    return (j1.profit > j2.profit); // sorting with profit in descending order
}

int jobSequenceProfit(Job jobs[],int n)
{
    sort(jobs,jobs+n,jobComparator);
    bool slots[n];
    int totalProfit=0,sequence[n];  // sequence is only required if wanting to display the job sequence

    // initializing all slots as false ,i.e-available
    for (int i = 0; i < n; i++)
    slots[i]=false;

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n,jobs[i].deadline)-1; j >=0; j--)
        {
            if(slots[j]==false) //if slot is available
            {
                sequence[j] = i; // job added to sequence
                totalProfit+=jobs[i].profit; // profit added
                slots[j]=true; // slot taken
                break;
            }
        }
        
    }
    
    // can display the sequence here
    
    // directly return the total profit
    return totalProfit;
}

int main()
{
    Job jobs[max_size];
    int n;
    cout<<"Enter number of jobs:"<<endl;
    cin>>n;
    if(n>max_size){
        cout<<"Please keep size below or equal to "<<max_size<<endl;
    }
    cout<<"Please enter deadline and profit for Jobs: "<<endl;
    for (int i = 0; i < n; i++)
    cin>>jobs[i].deadline>>jobs[i].profit; // reading space separated input from console into two diff variables
    
    cout<<"Total Profit: "<<jobSequenceProfit(jobs,n);
    return 0;
}