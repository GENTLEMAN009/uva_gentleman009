#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
	int n, op, x;
	while (scanf("%d", &n) == 1) {
		queue<int> q;
		stack<int> s;
		priority_queue<int> pq;
		bool isS = true, isQ = true, isPQ = true;

		for (int i = 0; i < n; i++) {
			scanf("%d %d", &op, &x);

			switch (op) {
			case 1:
				if (isS)
					s.push(x);
				if (isQ)
					q.push(x);
				if (isPQ)
					pq.push(x);
				break;
			case 2:
				if (isS) {
					if (s.empty() || s.top() != x)
						isS = false;
					else
						s.pop();
				}
				if (isQ) {
					if (q.empty() || q.front() != x)
						isQ = false;
					else
						q.pop();
				}
				if (isPQ) {
					if (pq.empty() || pq.top() != x)
						isPQ = false;
					else
						pq.pop();
				}
				break;
			}
		}

		if (isS == true && isQ == false && isPQ == false)
			cout << "stack" << endl;
		else if (isS == false && isQ == true && isPQ == false)
			cout << "queue" << endl;
		else if (isS == false && isQ == false && isPQ == true)
			cout << "priority queue" << endl;
		else if (isS == false && isQ == false && isPQ == false)
			cout << "impossible" << endl;
		else
			cout << "not sure" << endl;
	}
}

//******************not solved******************//
/*#include<bits/stdc++.h>
using namespace std;
int maxi(int a[], int n)
{
    sort(a,a+n);
    return a[n-1];
}
int main()
{
    int n, i, j, a[1000], b[1000], flag;
    while (scanf("%d", &n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d%d", &a[i], &b[i]);
        }
        //flag=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==2 && b[i] == b[0])
            {
                flag=0;
                break;
            }
            else if(a[i]==2 && b[i] == b[n-1])
            {
                flag=1;
                break;
            }
            else if(a[i] ==2 && b[i] == maxi(b,n))
            {
                flag=2;
                break;
            }
        }
        cout<<flag<<endl;
        if(flag==0)
        {
            cout<<"stack"<<endl;
        }
        else if(flag=1)
        {
            cout<<"queue"<<endl;
        }
        else if(flag ==2)
        {
            cout<<"priority queue"<<endl;
        }
        else if(flag ==0 || flag==1 || flag==2)
        {
            cout<<"not sure"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }

    }
}*/
