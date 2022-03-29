#include <iostream>
using namespace std;
class Meyve {
public:
Meyve(){
cout<<"Ben meyveyim."<<endl;
}
};
class elma : public Meyve{
public:
void Elma(){
cout<<"Ben kirmizi renkliyim!!"<<endl;
}
};
class muz : public Meyve{
public:
void Muz(){
cout<<"Ben sari renkliyim!!"<<endl;
}
};
int main() {
elma e;
e.Elma();
muz m;

m.Muz();
return 0;
}
