#include <iostream>
using namespace std;
class Hayvan
{
public:
void yer(){
cout << "Yeryuzu" << endl;
}
};
class Kopek: public Hayvan
{
public:
void yer(){
cout << "Kulube" << endl;
}
};
int main()
{
Kopek k,k1;
k.yer();
k1.Hayvan::yer();
return 0;
}
