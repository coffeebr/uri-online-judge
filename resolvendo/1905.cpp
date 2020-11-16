#include <iostream>
#include <set>

using namespace std;

typedef pair<short, short> ponto;

const ponto cops = make_pair(short(1), short(1));
const ponto robbers = make_pair(short(5), short(5));

bool caminho(bool mat[7][7], ponto p, set<ponto> &percurso)
{
    if (mat[p.first][p.second])
        return false;
    if (percurso.find(p) != percurso.end())

        return false;
    if (p == robbers)
        return true;

    percurso.insert(p);
    return (
        caminho(mat, make_pair(p.first - 1, p.second), percurso) ||
        caminho(mat, make_pair(p.first, p.second - 1), percurso) ||
        caminho(mat, make_pair(p.first + 1, p.second), percurso) ||
        caminho(mat, make_pair(p.first, p.second + 1), percurso)
    );
}

int main()
{
    ios::sync_with_stdio(false);
    int n, i, j;
    bool mat[7][7];
    set<ponto> percurso;

    cin >> n;

    while (n--)
    {
        for (i = 0; i < 7; i++)
        {
            if (i >= 1 && i <= 5)
            {
                for (j = 1; j < 6; j++)
                {
                    cin >> mat[i][j];
                }
                mat[i][0] = mat[i][6] = 1;
            }
            else
            {
                for (j = 0; j < 7; j++)
                {
                    mat[i][j] = 1;
                }
            }
        }
        
        percurso.clear();
        cout << (caminho(mat, cops, percurso) ? "COPS\n" : "ROBBERS\n");
    }
}