
int main(int argc, char const *argv[])
{
    const int buf; // ILLEGAL. const must be initialized
    int cnt = 0; // LEGAL. int initialized
    const int sz = cnt; // LEGAL. const int initialized to cnt's value.
    ++cnt; ++sz; // ILLEGAL. Value can't be assigned to const
    return 0;
}


