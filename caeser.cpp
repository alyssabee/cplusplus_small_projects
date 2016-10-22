// caeser.cpp : Simple (very) caeser cipher.
//              Reads from input stream and outputs text.
#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::vector; 
using std::endl; using std::string;

int main()
{
    vector<string> list;
    string current;
    
    cout << endl << "Please enter text to be converted, "
         << " and press Ctrl D when finished:" << endl;
    
    while(cin >> current) {
        
        for(auto& c : current) 
            c = c - 3;
        
        list.push_back(current);
    }
    
    for(auto s : list) 
        cout << s << " ";

    cout << endl;
    return 0;
}
