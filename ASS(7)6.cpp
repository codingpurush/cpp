#include <iostream>
using namespace std;
void remDup(char* S)
{
    /// empty
    if (S[0] == '\0')
        return;


    if (S[0] == S[1]) {
        int i = 0;
        while (S[i] != '\0') {
            S[i] = S[i + 1];
            i++;
        }
        remDup(S);
    }
    remDup(S + 1);
}

int main()
{
    char S2[] = "hello";
    remDup(S2);
    cout << S2 << endl;

    return 0;
}
