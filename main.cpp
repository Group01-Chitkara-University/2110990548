#include<iostream>
#include<list>

using namespace std;
//aABCD 

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }

}

int main(){

    list<int> list1;  //empty list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    list1.pop_back();//remove the element in back 
    list1.pop_front();//remove the element in front

    
    return 0;
}
