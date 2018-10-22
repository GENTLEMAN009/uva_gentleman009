#include <iostream>
#include <numeric>
#include <sstream>
#include <fstream>
#include<ctype.h>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iterator>
#include <map>
#define MAX 1000000
using namespace std;
int main()
{
    int m,n;
    while(scanf("%d%d", &m, &n)==2)
    {
        printf("%d\n", (m*n)-1);
    }
    return 0;
}
