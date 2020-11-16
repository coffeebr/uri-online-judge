#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string name, friends, bestFriend;
    vector<string> listFriends, listNoFriends;
    while (cin >> name && name != "FIM")
    {
        cin >> friends;
        if(friends == "YES")
        {
            if(name.size() > bestFriend.size()) bestFriend = name;
            if(find(listFriends.begin(), listFriends.end(), name) == listFriends.end()) listFriends.push_back(name);
        }
        else if(find(listNoFriends.begin(), listNoFriends.end(), name) == listNoFriends.end()) listNoFriends.push_back(name);
        {
            
        }
        
    }
    sort(listFriends.begin(), listFriends.end());
    sort(listNoFriends.begin(), listNoFriends.end());
    for (vector<string>::iterator it = listFriends.begin(); it != listFriends.end(); it++)
        cout << *it << endl;
    for (vector<string>::iterator it = listNoFriends.begin(); it != listNoFriends.end(); it++)
        cout << *it << endl;
    cout << "\nAmigo do Habay:\n"
         << bestFriend << endl;
}