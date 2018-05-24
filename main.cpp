#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
using namespace std;
ifstream fin("..\\date.in");
ofstream fout("..\\date.out");

string word;
int nrTerminals, nrNonterminals;
vector<char> nonterminals;
vector<char> terminals;
map<char, vector<string> > productions;
int nrProductions;
///A -> AA / aBa / lambda(codified with #)
char start;

void readGrammar() {
    fin >> nrTerminals;
    terminals.resize(nrTerminals);
    for (int i = 0; i < nrTerminals; i++)
        fin >> terminals[i];
    fin >> nrNonterminals;
    nonterminals.resize(nrNonterminals);
    for (int i = 0; i < nrTerminals; i++)
        fin >> nonterminals[i];
    fin >> nrProductions;
    for(int i = 0; i < nrProductions; i++){
        char leftMember;
        string rightMember;
        fin >> leftMember >> rightMember;
        productions[leftMember].push_back(rightMember);
    }
    fin >> start;
}

bool isAccepted(string word){
    queue <>

}

int main() {
    cin >> word;
    readGrammar();

    return 0;
}