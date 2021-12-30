// Q. Monk is a multi talented person and prepares results for his college in his free time. 
// (Yes, he is still in love with his old colleges). He gets a list of students with their marks.
// He gets a list of students with their marks. The maximum marks which can be obtained in teh exam is 100
// The Monk is supposed to arrange the list in such a anner that the list is sorted in decreasing
// order of marks. And if two students ahve the same marks they should be arranged in lexicographical manner.
// Constraints: 
// 1 <= N <= 10^5
// 1 <= marks <= 100
// 1 <= |Length of the name| <= 100 

#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,multiset<string> >marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int marks;
        string name;
        cin>>name>>marks;
        // marks_map[marks].insert(name);
        //}
        // auto cur_it = --marks_map.end();
        // while(true){
        //     auto &students = cur_it->second;
        //     int marks = cur_it->first;
        //     for(auto student:students){
        //         cout<<student<<" "<<marks<<endl;
        //     }
        //     if(cur_it==marks_map.begin()) {break;}
        //     cur_it--;
        // }

        marks_map[-1*marks].insert(name);}
        for(auto &marks_students_pr : marks_map){
            auto &students = marks_students_pr.second;
            int marks = marks_students_pr.first;
            for(auto student : students){
                cout<<student<<" "<<-1*marks<<endl;
            }
        }
    return 0;
}