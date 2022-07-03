int main(int argc, char const *argv[])
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    a = 42; // a is now 42
    b = 42; // b is now 42
    c = 42; // c is now 42
    d = 42; // error: d is an int*. Cannot assign an int. Should've done *d instead
    e = 42; // error: e is an int*. Cannot assign an int. Should've done *d instead
    g = 42; // error: g is reference to a const
    return 0;
}
