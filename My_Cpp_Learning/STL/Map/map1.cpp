#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> mp;
    map<int, string>::iterator it; 
    cout<<"Starting State size: "<<mp.size()<<endl;

    mp.insert(mp.begin(), pair<int, string>(700, "manish")); 
    mp.insert(mp.begin(), pair<int, string>(400, "rahul")); 
    mp.insert(mp.end(), pair<int, string>(600, "vishnu")); 
    mp.insert(pair<int, string>(800,"rishab"));
    mp.insert(pair<int, string>(100,"husky")); 
    
    // itr = mp.begin();                         // assign it to the start of the vector
    // while (itr != mp.end())                   // while it hasn't reach the end
    // {
    //     cout << itr->first << " = " << itr->second << "\n";   // print the value of the element it points to
    //     ++itr; 
    // }
    
    cout<<mp.begin()->first<<"="<<mp.begin()->second<<endl;   // To print first element
    cout<<"After State size: "<<mp.size()<<endl;
    for (it = mp.begin(); it != mp.end(); ++it){
      cout << it->first << " = " << it->second << endl;
    }

    cout<<mp.find(400)->second<<endl;          // To find elements by key

    mp.erase(100);

    cout<<"After deletion"<<endl;  
    for (it = mp.begin(); it != mp.end(); ++it){
      cout << it->first << " = " << it->second << endl;
    }

    /*map<int,string> mt;
    mt.insert(pair<int,string>(1,"hello"));
    
    for(it=mt.begin();it!=mt.end();it++){
      cout<<it->first<<" = "<<it->second<<endl;
    }*/
    return 0;
}