#include<bits/stdc++.h>
using namespace std;

class lruCache{
    int size ; //defining the size of the cache
    list<int> dq; //List holding the values of Cache
    unordered_map<int, list<int>::iterator> m; //To provide random access to the list
    
    public:
        lruCache(int x){
            size=x;
        }
        void refer(int x){
            if(m.find(x)==m.end()){ //  not present in the cache
                if(dq.size()==size){ // list is full
                    int last = dq.back();
                    dq.pop_back();
                    m.erase(last);
                }
            }
            else{
                dq.erase(m[x]);
            }
            dq.push_front(x);
            m[x]=dq.begin();
        }
        void display(){
            if(m.size()==0){
                cout << "Cache is empty ... " << endl;
            }
            else{
                for(auto i=dq.begin();i!=dq.end();i++){
                    cout << (*i) << " ";
                }
            }
            cout << endl ;
        }
};

int main(){
    lruCache c(3);
    c.refer(1);
    c.refer(3);
    c.refer(1);
    c.refer(4);

    c.display();
    
    c.refer(7);
    c.refer(5);
    
    c.display();
    
    c.refer(4);
    c.refer(9);
    
    c.display();
    return 0;
}