#include <iostream>
#include <algorithm>
using namespace std;
struct student{
    int id;
    int chinese;
    int math;
    int english;
    int total;
} students[310];
bool cmp(student a, student b){
    if (a.total != b.total) return a.total > b.total;
    else if (a.chinese != b.chinese && a.total == b.total) return a.chinese > b.chinese;
    else return a.id < b.id;
}
int main()
{
    int n;
    cin >> n;
    for (int i=1;i <= n;i++){
        students[i].id = i;
        cin >> students[i].chinese >> students[i].math >> students[i].english;
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }
    sort(students+1,students+n+1,cmp);
    for (int i=1;i <= 5;i++){
        cout << students[i].id << " " << students[i].total << endl;
    }
    return 0;
}